//stamp:07481af583456c4b
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
			}
			const TCHAR * XML_MAINWND;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _IMG{
			public:
			_IMG(){
			}
		}IMG;
		class _PNG{
			public:
			_PNG(){
				ID_PNG_SHADOW = _T("PNG:ID_PNG_SHADOW");
				ID_PNG_EDIT_BKG = _T("PNG:ID_PNG_EDIT_BKG");
				ID_PNG_BTN_BKG = _T("PNG:ID_PNG_BTN_BKG");
				ID_SYS_BTN_CLOSE = _T("PNG:ID_SYS_BTN_CLOSE");
			}
			const TCHAR * ID_PNG_SHADOW;
			const TCHAR * ID_PNG_EDIT_BKG;
			const TCHAR * ID_PNG_BTN_BKG;
			const TCHAR * ID_SYS_BTN_CLOSE;
		}PNG;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
		class _BIN{
			public:
			_BIN(){
				ID_BIN_32SYS = _T("BIN:ID_BIN_32SYS");
				ID_BIN_64SYS = _T("BIN:ID_BIN_64SYS");
			}
			const TCHAR * ID_BIN_32SYS;
			const TCHAR * ID_BIN_64SYS;
		}BIN;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"btn_apply",65560},
		{L"btn_close",65536},
		{L"btn_install",65538},
		{L"btn_spoof",65559},
		{L"btn_uninstall",65558},
		{L"hd0",65540},
		{L"hd0_new",65542},
		{L"hd0_raw",65541},
		{L"hd1",65543},
		{L"hd1_new",65545},
		{L"hd1_raw",65544},
		{L"hd2",65546},
		{L"hd2_new",65548},
		{L"hd2_raw",65547},
		{L"hd3",65549},
		{L"hd3_new",65551},
		{L"hd3_raw",65550},
		{L"hd4",65552},
		{L"hd4_new",65554},
		{L"hd4_raw",65553},
		{L"hd5",65555},
		{L"hd5_new",65557},
		{L"hd5_raw",65556},
		{L"wnd_install",65537},
		{L"wnd_main",65539}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			btn_apply = namedXmlID[0].strName;
			btn_close = namedXmlID[1].strName;
			btn_install = namedXmlID[2].strName;
			btn_spoof = namedXmlID[3].strName;
			btn_uninstall = namedXmlID[4].strName;
			hd0 = namedXmlID[5].strName;
			hd0_new = namedXmlID[6].strName;
			hd0_raw = namedXmlID[7].strName;
			hd1 = namedXmlID[8].strName;
			hd1_new = namedXmlID[9].strName;
			hd1_raw = namedXmlID[10].strName;
			hd2 = namedXmlID[11].strName;
			hd2_new = namedXmlID[12].strName;
			hd2_raw = namedXmlID[13].strName;
			hd3 = namedXmlID[14].strName;
			hd3_new = namedXmlID[15].strName;
			hd3_raw = namedXmlID[16].strName;
			hd4 = namedXmlID[17].strName;
			hd4_new = namedXmlID[18].strName;
			hd4_raw = namedXmlID[19].strName;
			hd5 = namedXmlID[20].strName;
			hd5_new = namedXmlID[21].strName;
			hd5_raw = namedXmlID[22].strName;
			wnd_install = namedXmlID[23].strName;
			wnd_main = namedXmlID[24].strName;
		}
		 const wchar_t * btn_apply;
		 const wchar_t * btn_close;
		 const wchar_t * btn_install;
		 const wchar_t * btn_spoof;
		 const wchar_t * btn_uninstall;
		 const wchar_t * hd0;
		 const wchar_t * hd0_new;
		 const wchar_t * hd0_raw;
		 const wchar_t * hd1;
		 const wchar_t * hd1_new;
		 const wchar_t * hd1_raw;
		 const wchar_t * hd2;
		 const wchar_t * hd2_new;
		 const wchar_t * hd2_raw;
		 const wchar_t * hd3;
		 const wchar_t * hd3_new;
		 const wchar_t * hd3_raw;
		 const wchar_t * hd4;
		 const wchar_t * hd4_new;
		 const wchar_t * hd4_raw;
		 const wchar_t * hd5;
		 const wchar_t * hd5_new;
		 const wchar_t * hd5_raw;
		 const wchar_t * wnd_install;
		 const wchar_t * wnd_main;
		}name;

		class _id{
		public:
		const static int btn_apply	=	65560;
		const static int btn_close	=	65536;
		const static int btn_install	=	65538;
		const static int btn_spoof	=	65559;
		const static int btn_uninstall	=	65558;
		const static int hd0	=	65540;
		const static int hd0_new	=	65542;
		const static int hd0_raw	=	65541;
		const static int hd1	=	65543;
		const static int hd1_new	=	65545;
		const static int hd1_raw	=	65544;
		const static int hd2	=	65546;
		const static int hd2_new	=	65548;
		const static int hd2_raw	=	65547;
		const static int hd3	=	65549;
		const static int hd3_new	=	65551;
		const static int hd3_raw	=	65550;
		const static int hd4	=	65552;
		const static int hd4_new	=	65554;
		const static int hd4_raw	=	65553;
		const static int hd5	=	65555;
		const static int hd5_new	=	65557;
		const static int hd5_raw	=	65556;
		const static int wnd_install	=	65537;
		const static int wnd_main	=	65539;
		}id;

		class _string{
		public:
		const static int title	=	0;
		const static int ver	=	1;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int carrot	=	1;
		const static int gray	=	2;
		const static int green	=	3;
		const static int red	=	4;
		const static int white	=	5;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
