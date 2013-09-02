// generated by Fast Light User Interface Designer (fluid) version 1.0302

#ifndef MainWindow_h
#define MainWindow_h
#include <FL/Fl.H>
namespace spades { class Serverbrowser; }; 
#include <FL/Fl_Window.H>
#include <string>
#include <vector>
#include <FL/Fl_Input.H>
#include <FL/Fl_Tabs.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Help_View.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Input_Choice.H>
#include <FL/Fl_Spinner.H>
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Browser.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Return_Button.H>

class MainWindow : public Fl_Window {
  void _MainWindow();
public:
  MainWindow(int X, int Y, int W, int H, const char *L = 0);
  MainWindow(int W, int H, const char *L = 0);
  MainWindow();
private:
  Fl_Input *quickHostInput;
  inline void cb_quickHostInput_i(Fl_Input*, void*);
  static void cb_quickHostInput(Fl_Input*, void*);
  Fl_Tabs *mainTab;
public:
  Fl_Group *groupAbout;
  Fl_Help_View *aboutView;
private:
  Fl_Choice *msaaSelect;
  inline void cb_msaaSelect_i(Fl_Choice*, void*);
  static void cb_msaaSelect(Fl_Choice*, void*);
  Fl_Check_Button *fullscreenCheck;
  inline void cb_fullscreenCheck_i(Fl_Check_Button*, void*);
  static void cb_fullscreenCheck(Fl_Check_Button*, void*);
  Fl_Input_Choice *modeSelect;
  inline void cb_modeSelect_i(Fl_Input_Choice*, void*);
  static void cb_modeSelect(Fl_Input_Choice*, void*);
  Fl_Spinner *polyInput;
  inline void cb_polyInput_i(Fl_Spinner*, void*);
  static void cb_polyInput(Fl_Spinner*, void*);
  Fl_Light_Button *eaxCheck;
  inline void cb_eaxCheck_i(Fl_Light_Button*, void*);
  static void cb_eaxCheck(Fl_Light_Button*, void*);
  Fl_Light_Button *advancedLensCheck;
  inline void cb_advancedLensCheck_i(Fl_Light_Button*, void*);
  static void cb_advancedLensCheck(Fl_Light_Button*, void*);
  Fl_Light_Button *softParticleCheck;
  inline void cb_softParticleCheck_i(Fl_Light_Button*, void*);
  static void cb_softParticleCheck(Fl_Light_Button*, void*);
public:
  Fl_Light_Button *radiosityCheck;
private:
  inline void cb_radiosityCheck_i(Fl_Light_Button*, void*);
  static void cb_radiosityCheck(Fl_Light_Button*, void*);
public:
  Fl_Choice *directLightSelect;
private:
  inline void cb_directLightSelect_i(Fl_Choice*, void*);
  static void cb_directLightSelect(Fl_Choice*, void*);
public:
  Fl_Choice *shaderSelect;
private:
  inline void cb_shaderSelect_i(Fl_Choice*, void*);
  static void cb_shaderSelect(Fl_Choice*, void*);
public:
  Fl_Light_Button *bloodCheck;
private:
  inline void cb_bloodCheck_i(Fl_Light_Button*, void*);
  static void cb_bloodCheck(Fl_Light_Button*, void*);
  Fl_Input *playerNameInput;
  inline void cb_playerNameInput_i(Fl_Input*, void*);
  static void cb_playerNameInput(Fl_Input*, void*);
  inline void cb_Advanced_i(Fl_Button*, void*);
  static void cb_Advanced(Fl_Button*, void*);
public:
  Fl_Group *groupReport;
  Fl_Output *outputGLRenderer;
  Fl_Output *outputGLVersion;
  Fl_Output *outputGLSLVersion;
  Fl_Help_View *glInfoView;
protected:
  Fl_Browser *serverListbox;
private:
  inline void cb_serverListbox_i(Fl_Browser*, void*);
  static void cb_serverListbox(Fl_Browser*, void*);
public:
  Fl_Check_Button *checkFilterEmpty;
private:
  inline void cb_checkFilterEmpty_i(Fl_Check_Button*, void*);
  static void cb_checkFilterEmpty(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *checkFilterFull;
private:
  inline void cb_checkFilterFull_i(Fl_Check_Button*, void*);
  static void cb_checkFilterFull(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *checkFilterV75;
private:
  inline void cb_checkFilterV75_i(Fl_Check_Button*, void*);
  static void cb_checkFilterV75(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *checkFilterV76;
private:
  inline void cb_checkFilterV76_i(Fl_Check_Button*, void*);
  static void cb_checkFilterV76(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *checkFilterVOther;
private:
  inline void cb_checkFilterVOther_i(Fl_Check_Button*, void*);
  static void cb_checkFilterVOther(Fl_Check_Button*, void*);
  Fl_Box *bannerBox;
  Fl_Return_Button *connectButton;
  inline void cb_connectButton_i(Fl_Return_Button*, void*);
  static void cb_connectButton(Fl_Return_Button*, void*);
  bool inited; 
protected:
  spades::Serverbrowser* browser; 
private:
  bool shaderHighCapable; 
  void QuickConnectPressed();
  void StartGame(const std::string& host);
public:
  void LoadPrefs();
private:
  void SavePrefs();
  void OpenDetailConfig();
public:
  void Init();
private:
  void DisableMSAA();
  void MSAAEnabled();
public:
  void CheckGLCapability();
private:
  void ServerSelectionChanged();
public:
  void updateFilters();;
  ~MainWindow();
};
extern unsigned char aboutText[3447];
#endif
