#include <windows.h> 
#include "resource.h"
#include "Pendulum.cpp"

BOOL CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);
void Start(double, double, double, double);
void Tick();

HWND edit_m, 
	 edit_l, 
	 edit_n, 
	 edit_a,
	 graphBox;

HBITMAP hbitmap;

CHAR edit_m_text[] = { "7" },
	 edit_l_text[] = { "5" },
	 edit_n_text[] = { "100" },
	 edit_a_text[] = { "100" };

Pendulum *p;

bool started = false;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	DialogBoxParam(hInstance, MAKEINTRESOURCE(IDD_FORMVIEW), 0, (DlgProc), 0);
	return NULL; 
}

BOOL CALLBACK DlgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg)
	{
	case WM_INITDIALOG:

		edit_m = GetDlgItem(hwnd, IDC_EM);
		edit_l = GetDlgItem(hwnd, IDC_EL);
		edit_n = GetDlgItem(hwnd, IDC_EN);
		edit_a = GetDlgItem(hwnd, IDC_EA);
		graphBox = GetDlgItem(hwnd, IDC_GRAPHBOX);

		SendMessage(edit_m, WM_SETTEXT, 0, (LPARAM)edit_m_text);
		SendMessage(edit_l, WM_SETTEXT, 0, (LPARAM)edit_l_text);
		SendMessage(edit_n, WM_SETTEXT, 0, (LPARAM)edit_n_text);
		SendMessage(edit_a, WM_SETTEXT, 0, (LPARAM)edit_a_text);

		//hbitmap = ::LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP1));


		SetFocus(edit_m);

		SetTimer(hwnd, 1, 10, NULL);
		break;
	case WM_COMMAND:

		switch (LOWORD(wParam))
		{
		case IDC_BSTART:
			SendMessage(edit_m, WM_GETTEXT, 0, (LPARAM)edit_m_text);
			SendMessage(edit_l, WM_GETTEXT, 0, (LPARAM)edit_l_text);
			SendMessage(edit_n, WM_GETTEXT, 0, (LPARAM)edit_n_text);
			SendMessage(edit_a, WM_GETTEXT, 0, (LPARAM)edit_a_text);

			Start(atof(edit_m_text),
				  atof(edit_l_text),
				  atof(edit_n_text),
				  atof(edit_a_text));

			break;

		case IDC_BSTOP:
			EndDialog(hwnd, 0);
			break;

		default:
			break;
		}

		break;
	case WM_CLOSE:
		KillTimer(hwnd, 1);
		EndDialog(hwnd, 0);
		break;

	case WM_TIMER:
		Tick();
		break;

	default:
		break;
	}

	return false;
}

void Start(double m, double l, double n, double a) {
	if (!started) p = new Pendulum(m, n, a, l);
	started = true;
}

void Tick() {
	if (started) p->Step();

}