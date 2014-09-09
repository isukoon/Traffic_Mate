#pragma once
//#include <opencv\cv.h>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include "VehicleDetect.cpp"
#include "Pedestrians.cpp"
#include "MotionDetect.cpp"

namespace AutoTraffic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;

	CvHaarClassifierCascade *cascade;
	CvMemStorage            *storage;


int findLarge(int p, int q, int r, int s);

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label13;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::ComboBox^  comboBox17;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox20;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::ComboBox^  comboBox13;
	private: System::Windows::Forms::ComboBox^  comboBox14;
	private: System::Windows::Forms::ComboBox^  comboBox15;
	private: System::Windows::Forms::ComboBox^  comboBox16;
	private: System::Windows::Forms::ComboBox^  comboBox19;





	private: System::Windows::Forms::ComboBox^  comboBox18;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::ComboBox^  comboBox8;






	private: System::Windows::Forms::Label^  label18;


	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label16;




	private: System::Windows::Forms::Label^  label24;

	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label23;



	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::GroupBox^  groupBox10;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::ComboBox^  comboBox9;
private: System::Windows::Forms::ComboBox^  comboBox10;
private: System::Windows::Forms::ComboBox^  comboBox11;
private: System::Windows::Forms::ComboBox^  comboBox12;
private: System::Windows::Forms::PictureBox^  pictureBox9;
private: System::Windows::Forms::PictureBox^  pictureBox10;


private: System::Windows::Forms::PictureBox^  pictureBox11;
private: System::Windows::Forms::PictureBox^  pictureBox12;

private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Button^  button6;












	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GUI::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox17 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox20 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox16 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox19 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->comboBox18 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			this->groupBox7->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			this->groupBox6->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(195, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GUI::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->pictureBox9);
			this->groupBox1->Controls->Add(this->comboBox17);
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(3, 38);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(409, 314);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &GUI::groupBox1_Enter);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(64, 68);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(73, 13);
			this->label20->TabIndex = 8;
			this->label20->Text = L"Vehicle Count";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(146, 69);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 7;
			this->label9->Text = L"0";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(15, 99);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(375, 209);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 6;
			this->pictureBox9->TabStop = false;
			// 
			// comboBox17
			// 
			this->comboBox17->DisplayMember = L"No Selection";
			this->comboBox17->FormattingEnabled = true;
			this->comboBox17->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"No Selection", L"Upload a Video", L"Live Streaming"});
			this->comboBox17->Location = System::Drawing::Point(120, 10);
			this->comboBox17->Name = L"comboBox17";
			this->comboBox17->Size = System::Drawing::Size(119, 21);
			this->comboBox17->TabIndex = 4;
			this->comboBox17->Text = L"No Selection";
			this->comboBox17->ValueMember = L"No Selection";
			this->comboBox17->SelectedIndexChanged += gcnew System::EventHandler(this, &GUI::comboBox17_SelectedIndexChanged);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label18);
			this->groupBox5->Controls->Add(this->label24);
			this->groupBox5->Controls->Add(this->label19);
			this->groupBox5->Controls->Add(this->comboBox3);
			this->groupBox5->Controls->Add(this->comboBox4);
			this->groupBox5->Controls->Add(this->comboBox2);
			this->groupBox5->Controls->Add(this->comboBox1);
			this->groupBox5->Location = System::Drawing::Point(245, 3);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(158, 79);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(29, 13);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(78, 13);
			this->label18->TabIndex = 14;
			this->label18->Text = L"Detection Area";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(5, 56);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(14, 13);
			this->label24->TabIndex = 15;
			this->label24->Text = L"Y";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 31);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(14, 13);
			this->label19->TabIndex = 14;
			this->label19->Text = L"X";
			this->label19->Click += gcnew System::EventHandler(this, &GUI::label19_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->DisplayMember = L"157";
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(704) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639", L"640", L"641", L"642", 
				L"643", L"644", L"645", L"646", L"647", L"648", L"649", L"650", L"651", L"652", L"653", L"654", L"655", L"656", L"657", L"658", 
				L"659", L"660", L"661", L"662", L"663", L"664", L"665", L"666", L"667", L"668", L"669", L"670", L"671", L"672", L"673", L"674", 
				L"675", L"676", L"677", L"678", L"679", L"680", L"681", L"682", L"683", L"684", L"685", L"686", L"687", L"688", L"689", L"690", 
				L"691", L"692", L"693", L"694", L"695", L"696", L"697", L"698", L"699", L"700", L"701", L"702", L"703"});
			this->comboBox3->Location = System::Drawing::Point(97, 53);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(52, 21);
			this->comboBox3->TabIndex = 4;
			this->comboBox3->Text = L"157";
			this->comboBox3->ValueMember = L"157";
			// 
			// comboBox4
			// 
			this->comboBox4->DisplayMember = L"599";
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(640) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639"});
			this->comboBox4->Location = System::Drawing::Point(97, 28);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(52, 21);
			this->comboBox4->TabIndex = 5;
			this->comboBox4->Text = L"599";
			this->comboBox4->ValueMember = L"599";
			// 
			// comboBox2
			// 
			this->comboBox2->DisplayMember = L"84";
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(704) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639", L"640", L"641", L"642", 
				L"643", L"644", L"645", L"646", L"647", L"648", L"649", L"650", L"651", L"652", L"653", L"654", L"655", L"656", L"657", L"658", 
				L"659", L"660", L"661", L"662", L"663", L"664", L"665", L"666", L"667", L"668", L"669", L"670", L"671", L"672", L"673", L"674", 
				L"675", L"676", L"677", L"678", L"679", L"680", L"681", L"682", L"683", L"684", L"685", L"686", L"687", L"688", L"689", L"690", 
				L"691", L"692", L"693", L"694", L"695", L"696", L"697", L"698", L"699", L"700", L"701", L"702", L"703"});
			this->comboBox2->Location = System::Drawing::Point(26, 53);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(56, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->Text = L"84";
			this->comboBox2->ValueMember = L"84";
			// 
			// comboBox1
			// 
			this->comboBox1->DisplayMember = L"453";
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(704) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639", L"640", L"641", L"642", 
				L"643", L"644", L"645", L"646", L"647", L"648", L"649", L"650", L"651", L"652", L"653", L"654", L"655", L"656", L"657", L"658", 
				L"659", L"660", L"661", L"662", L"663", L"664", L"665", L"666", L"667", L"668", L"669", L"670", L"671", L"672", L"673", L"674", 
				L"675", L"676", L"677", L"678", L"679", L"680", L"681", L"682", L"683", L"684", L"685", L"686", L"687", L"688", L"689", L"690", 
				L"691", L"692", L"693", L"694", L"695", L"696", L"697", L"698", L"699", L"700", L"701", L"702", L"703"});
			this->comboBox1->Location = System::Drawing::Point(26, 28);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(57, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"453";
			this->comboBox1->ValueMember = L"453";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &GUI::comboBox1_SelectedIndexChanged_1);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(146, 40);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"File Path";
			this->label10->Click += gcnew System::EventHandler(this, &GUI::label10_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 35);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Upload";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GUI::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(9, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 15);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Choose an Option";
			this->label5->Click += gcnew System::EventHandler(this, &GUI::label5_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label46);
			this->groupBox2->Controls->Add(this->label43);
			this->groupBox2->Controls->Add(this->pictureBox12);
			this->groupBox2->Controls->Add(this->comboBox20);
			this->groupBox2->Controls->Add(this->groupBox7);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Location = System::Drawing::Point(418, 353);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(437, 323);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(38, 72);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(73, 13);
			this->label46->TabIndex = 11;
			this->label46->Text = L"Vehicle Count";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(132, 72);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(13, 13);
			this->label43->TabIndex = 9;
			this->label43->Text = L"0";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(9, 105);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(391, 209);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 10;
			this->pictureBox12->TabStop = false;
			// 
			// comboBox20
			// 
			this->comboBox20->DisplayMember = L"No Selection";
			this->comboBox20->FormattingEnabled = true;
			this->comboBox20->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"No Selection", L"Upload a Video", L"Live Streaming"});
			this->comboBox20->Location = System::Drawing::Point(117, 11);
			this->comboBox20->Name = L"comboBox20";
			this->comboBox20->Size = System::Drawing::Size(119, 21);
			this->comboBox20->TabIndex = 6;
			this->comboBox20->Text = L"No Selection";
			this->comboBox20->ValueMember = L"No Selection";
			this->comboBox20->SelectedIndexChanged += gcnew System::EventHandler(this, &GUI::comboBox20_SelectedIndexChanged);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label29);
			this->groupBox7->Controls->Add(this->label27);
			this->groupBox7->Controls->Add(this->label23);
			this->groupBox7->Controls->Add(this->comboBox13);
			this->groupBox7->Controls->Add(this->comboBox14);
			this->groupBox7->Controls->Add(this->comboBox15);
			this->groupBox7->Controls->Add(this->comboBox16);
			this->groupBox7->Location = System::Drawing::Point(242, 11);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(168, 82);
			this->groupBox7->TabIndex = 5;
			this->groupBox7->TabStop = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(29, 7);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(78, 13);
			this->label29->TabIndex = 17;
			this->label29->Text = L"Detection Area";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(13, 53);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(14, 13);
			this->label27->TabIndex = 16;
			this->label27->Text = L"Y";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(14, 28);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(14, 13);
			this->label23->TabIndex = 15;
			this->label23->Text = L"X";
			// 
			// comboBox13
			// 
			this->comboBox13->DisplayMember = L"305";
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(704) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639", L"640", L"641", L"642", 
				L"643", L"644", L"645", L"646", L"647", L"648", L"649", L"650", L"651", L"652", L"653", L"654", L"655", L"656", L"657", L"658", 
				L"659", L"660", L"661", L"662", L"663", L"664", L"665", L"666", L"667", L"668", L"669", L"670", L"671", L"672", L"673", L"674", 
				L"675", L"676", L"677", L"678", L"679", L"680", L"681", L"682", L"683", L"684", L"685", L"686", L"687", L"688", L"689", L"690", 
				L"691", L"692", L"693", L"694", L"695", L"696", L"697", L"698", L"699", L"700", L"701", L"702", L"703"});
			this->comboBox13->Location = System::Drawing::Point(106, 49);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(52, 21);
			this->comboBox13->TabIndex = 4;
			this->comboBox13->Text = L"305";
			this->comboBox13->ValueMember = L"305";
			// 
			// comboBox14
			// 
			this->comboBox14->DisplayMember = L"539";
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Items->AddRange(gcnew cli::array< System::Object^  >(640) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639"});
			this->comboBox14->Location = System::Drawing::Point(106, 22);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(52, 21);
			this->comboBox14->TabIndex = 5;
			this->comboBox14->Text = L"539";
			this->comboBox14->ValueMember = L"539";
			// 
			// comboBox15
			// 
			this->comboBox15->DisplayMember = L"223";
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->Items->AddRange(gcnew cli::array< System::Object^  >(704) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639", L"640", L"641", L"642", 
				L"643", L"644", L"645", L"646", L"647", L"648", L"649", L"650", L"651", L"652", L"653", L"654", L"655", L"656", L"657", L"658", 
				L"659", L"660", L"661", L"662", L"663", L"664", L"665", L"666", L"667", L"668", L"669", L"670", L"671", L"672", L"673", L"674", 
				L"675", L"676", L"677", L"678", L"679", L"680", L"681", L"682", L"683", L"684", L"685", L"686", L"687", L"688", L"689", L"690", 
				L"691", L"692", L"693", L"694", L"695", L"696", L"697", L"698", L"699", L"700", L"701", L"702", L"703"});
			this->comboBox15->Location = System::Drawing::Point(35, 49);
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(53, 21);
			this->comboBox15->TabIndex = 1;
			this->comboBox15->Text = L"223";
			this->comboBox15->ValueMember = L"223";
			// 
			// comboBox16
			// 
			this->comboBox16->DisplayMember = L"343";
			this->comboBox16->FormattingEnabled = true;
			this->comboBox16->Items->AddRange(gcnew cli::array< System::Object^  >(640) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639"});
			this->comboBox16->Location = System::Drawing::Point(36, 22);
			this->comboBox16->Name = L"comboBox16";
			this->comboBox16->Size = System::Drawing::Size(52, 21);
			this->comboBox16->TabIndex = 0;
			this->comboBox16->Text = L"343";
			this->comboBox16->ValueMember = L"343";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(132, 42);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 13);
			this->label13->TabIndex = 4;
			this->label13->Text = L"File Path";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(9, 37);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Upload";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &GUI::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(6, 11);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 15);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Choose an Option";
			this->label7->Click += gcnew System::EventHandler(this, &GUI::label7_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label44);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->pictureBox10);
			this->groupBox3->Controls->Add(this->comboBox19);
			this->groupBox3->Controls->Add(this->groupBox6);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Location = System::Drawing::Point(418, 38);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(437, 314);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(50, 67);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(73, 13);
			this->label44->TabIndex = 9;
			this->label44->Text = L"Vehicle Count";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(139, 67);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 8;
			this->label14->Text = L"0";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(9, 99);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(391, 209);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 8;
			this->pictureBox10->TabStop = false;
			// 
			// comboBox19
			// 
			this->comboBox19->DisplayMember = L"No Selection";
			this->comboBox19->FormattingEnabled = true;
			this->comboBox19->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"No Selection", L"Upload a Video", L"Live Streaming"});
			this->comboBox19->Location = System::Drawing::Point(110, 10);
			this->comboBox19->Name = L"comboBox19";
			this->comboBox19->Size = System::Drawing::Size(119, 21);
			this->comboBox19->TabIndex = 6;
			this->comboBox19->Text = L"No Selection";
			this->comboBox19->ValueMember = L"No Selection";
			this->comboBox19->SelectedIndexChanged += gcnew System::EventHandler(this, &GUI::comboBox19_SelectedIndexChanged);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label28);
			this->groupBox6->Controls->Add(this->label26);
			this->groupBox6->Controls->Add(this->label22);
			this->groupBox6->Controls->Add(this->comboBox9);
			this->groupBox6->Controls->Add(this->comboBox10);
			this->groupBox6->Controls->Add(this->comboBox11);
			this->groupBox6->Controls->Add(this->comboBox12);
			this->groupBox6->Location = System::Drawing::Point(235, 8);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(175, 72);
			this->groupBox6->TabIndex = 5;
			this->groupBox6->TabStop = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(34, 6);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(78, 13);
			this->label28->TabIndex = 17;
			this->label28->Text = L"Detection Area";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(19, 51);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(14, 13);
			this->label26->TabIndex = 16;
			this->label26->Text = L"Y";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(19, 26);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(14, 13);
			this->label22->TabIndex = 15;
			this->label22->Text = L"X";
			// 
			// comboBox9
			// 
			this->comboBox9->DisplayMember = L"194";
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(704) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639", L"640", L"641", L"642", 
				L"643", L"644", L"645", L"646", L"647", L"648", L"649", L"650", L"651", L"652", L"653", L"654", L"655", L"656", L"657", L"658", 
				L"659", L"660", L"661", L"662", L"663", L"664", L"665", L"666", L"667", L"668", L"669", L"670", L"671", L"672", L"673", L"674", 
				L"675", L"676", L"677", L"678", L"679", L"680", L"681", L"682", L"683", L"684", L"685", L"686", L"687", L"688", L"689", L"690", 
				L"691", L"692", L"693", L"694", L"695", L"696", L"697", L"698", L"699", L"700", L"701", L"702", L"703"});
			this->comboBox9->Location = System::Drawing::Point(113, 46);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(52, 21);
			this->comboBox9->TabIndex = 4;
			this->comboBox9->Text = L"194";
			this->comboBox9->ValueMember = L"194";
			// 
			// comboBox10
			// 
			this->comboBox10->DisplayMember = L"568";
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(640) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639"});
			this->comboBox10->Location = System::Drawing::Point(113, 21);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(52, 21);
			this->comboBox10->TabIndex = 5;
			this->comboBox10->Text = L"568";
			this->comboBox10->ValueMember = L"568";
			// 
			// comboBox11
			// 
			this->comboBox11->DisplayMember = L"126";
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(704) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639", L"640", L"641", L"642", 
				L"643", L"644", L"645", L"646", L"647", L"648", L"649", L"650", L"651", L"652", L"653", L"654", L"655", L"656", L"657", L"658", 
				L"659", L"660", L"661", L"662", L"663", L"664", L"665", L"666", L"667", L"668", L"669", L"670", L"671", L"672", L"673", L"674", 
				L"675", L"676", L"677", L"678", L"679", L"680", L"681", L"682", L"683", L"684", L"685", L"686", L"687", L"688", L"689", L"690", 
				L"691", L"692", L"693", L"694", L"695", L"696", L"697", L"698", L"699", L"700", L"701", L"702", L"703"});
			this->comboBox11->Location = System::Drawing::Point(43, 47);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(52, 21);
			this->comboBox11->TabIndex = 1;
			this->comboBox11->Text = L"126";
			this->comboBox11->ValueMember = L"126";
			// 
			// comboBox12
			// 
			this->comboBox12->DisplayMember = L"288";
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(640) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639"});
			this->comboBox12->Location = System::Drawing::Point(42, 21);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(52, 21);
			this->comboBox12->TabIndex = 0;
			this->comboBox12->Text = L"288";
			this->comboBox12->ValueMember = L"288";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(139, 40);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 13);
			this->label11->TabIndex = 4;
			this->label11->Text = L"File Path";
			this->label11->Click += gcnew System::EventHandler(this, &GUI::label11_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(9, 35);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Upload";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GUI::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(6, 11);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(105, 15);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Choose an Option";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label45);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->pictureBox11);
			this->groupBox4->Controls->Add(this->label21);
			this->groupBox4->Controls->Add(this->comboBox18);
			this->groupBox4->Controls->Add(this->groupBox9);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Location = System::Drawing::Point(9, 353);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(403, 323);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(58, 67);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(73, 13);
			this->label45->TabIndex = 16;
			this->label45->Text = L"Vehicle Count";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(146, 69);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 8;
			this->label15->Text = L"0";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(9, 105);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(375, 209);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 8;
			this->pictureBox11->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(246, 40);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(14, 13);
			this->label21->TabIndex = 15;
			this->label21->Text = L"X";
			// 
			// comboBox18
			// 
			this->comboBox18->DisplayMember = L"No Selection";
			this->comboBox18->FormattingEnabled = true;
			this->comboBox18->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"No Selection", L"Upload a Video", L"Live Streaming"});
			this->comboBox18->Location = System::Drawing::Point(114, 7);
			this->comboBox18->Name = L"comboBox18";
			this->comboBox18->Size = System::Drawing::Size(119, 21);
			this->comboBox18->TabIndex = 6;
			this->comboBox18->Text = L"No Selection";
			this->comboBox18->ValueMember = L"No Selection";
			this->comboBox18->SelectedIndexChanged += gcnew System::EventHandler(this, &GUI::comboBox18_SelectedIndexChanged);
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->label17);
			this->groupBox9->Controls->Add(this->label25);
			this->groupBox9->Controls->Add(this->comboBox5);
			this->groupBox9->Controls->Add(this->comboBox6);
			this->groupBox9->Controls->Add(this->comboBox7);
			this->groupBox9->Controls->Add(this->comboBox8);
			this->groupBox9->Location = System::Drawing::Point(239, 9);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(158, 80);
			this->groupBox9->TabIndex = 5;
			this->groupBox9->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(29, 12);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(78, 13);
			this->label17->TabIndex = 17;
			this->label17->Text = L"Detection Area";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(8, 54);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(14, 13);
			this->label25->TabIndex = 16;
			this->label25->Text = L"Y";
			// 
			// comboBox5
			// 
			this->comboBox5->DisplayMember = L"159";
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(704) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639", L"640", L"641", L"642", 
				L"643", L"644", L"645", L"646", L"647", L"648", L"649", L"650", L"651", L"652", L"653", L"654", L"655", L"656", L"657", L"658", 
				L"659", L"660", L"661", L"662", L"663", L"664", L"665", L"666", L"667", L"668", L"669", L"670", L"671", L"672", L"673", L"674", 
				L"675", L"676", L"677", L"678", L"679", L"680", L"681", L"682", L"683", L"684", L"685", L"686", L"687", L"688", L"689", L"690", 
				L"691", L"692", L"693", L"694", L"695", L"696", L"697", L"698", L"699", L"700", L"701", L"702", L"703"});
			this->comboBox5->Location = System::Drawing::Point(93, 52);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(56, 21);
			this->comboBox5->TabIndex = 4;
			this->comboBox5->Text = L"194";
			this->comboBox5->ValueMember = L"194";
			// 
			// comboBox6
			// 
			this->comboBox6->DisplayMember = L"116";
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(640) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639"});
			this->comboBox6->Location = System::Drawing::Point(94, 27);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(55, 21);
			this->comboBox6->TabIndex = 5;
			this->comboBox6->Text = L"568";
			this->comboBox6->ValueMember = L"568";
			// 
			// comboBox7
			// 
			this->comboBox7->DisplayMember = L"659";
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(704) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639", L"640", L"641", L"642", 
				L"643", L"644", L"645", L"646", L"647", L"648", L"649", L"650", L"651", L"652", L"653", L"654", L"655", L"656", L"657", L"658", 
				L"659", L"660", L"661", L"662", L"663", L"664", L"665", L"666", L"667", L"668", L"669", L"670", L"671", L"672", L"673", L"674", 
				L"675", L"676", L"677", L"678", L"679", L"680", L"681", L"682", L"683", L"684", L"685", L"686", L"687", L"688", L"689", L"690", 
				L"691", L"692", L"693", L"694", L"695", L"696", L"697", L"698", L"699", L"700", L"701", L"702", L"703"});
			this->comboBox7->Location = System::Drawing::Point(28, 51);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(60, 21);
			this->comboBox7->TabIndex = 1;
			this->comboBox7->Text = L"86";
			this->comboBox7->ValueMember = L"86";
			// 
			// comboBox8
			// 
			this->comboBox8->DisplayMember = L"512";
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(640) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", 
				L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", 
				L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", 
				L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", 
				L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", 
				L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", 
				L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", 
				L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", 
				L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", 
				L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", 
				L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", 
				L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", 
				L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", 
				L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", 
				L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", 
				L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", 
				L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", 
				L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", 
				L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", 
				L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", 
				L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", 
				L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", 
				L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402", 
				L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418", 
				L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434", 
				L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450", 
				L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466", 
				L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482", 
				L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498", 
				L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514", 
				L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530", 
				L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546", 
				L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562", 
				L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578", 
				L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594", 
				L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610", 
				L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626", 
				L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639"});
			this->comboBox8->Location = System::Drawing::Point(26, 27);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(62, 21);
			this->comboBox8->TabIndex = 0;
			this->comboBox8->Text = L"453";
			this->comboBox8->ValueMember = L"453";
			this->comboBox8->SelectedIndexChanged += gcnew System::EventHandler(this, &GUI::comboBox8_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(146, 35);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 13);
			this->label12->TabIndex = 3;
			this->label12->Text = L"File Path";
			this->label12->Click += gcnew System::EventHandler(this, &GUI::label12_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(9, 28);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Upload";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &GUI::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 15);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Choose an Option";
			this->label6->Click += gcnew System::EventHandler(this, &GUI::label6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(875, 354);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 59);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(875, 609);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 58);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(875, 523);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 55);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(875, 439);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 53);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(890, 336);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Route 1";
			this->label1->Click += gcnew System::EventHandler(this, &GUI::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(894, 590);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Route 4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(894, 504);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Route 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(894, 420);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Route 2";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(35, 9);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(139, 20);
			this->label16->TabIndex = 13;
			this->label16->Text = L"Traffic Automation";
			this->label16->Click += gcnew System::EventHandler(this, &GUI::label16_Click);
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->label31);
			this->groupBox10->Controls->Add(this->label30);
			this->groupBox10->Location = System::Drawing::Point(872, 17);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(97, 62);
			this->groupBox10->TabIndex = 8;
			this->groupBox10->TabStop = false;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(44, 37);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(14, 13);
			this->label31->TabIndex = 8;
			this->label31->Text = L"0";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(16, 14);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(69, 13);
			this->label30->TabIndex = 8;
			this->label30->Text = L"Waiting Time";
			this->label30->Click += gcnew System::EventHandler(this, &GUI::label30_Click);
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->label32);
			this->groupBox11->Controls->Add(this->label33);
			this->groupBox11->Location = System::Drawing::Point(872, 97);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(97, 62);
			this->groupBox11->TabIndex = 18;
			this->groupBox11->TabStop = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(37, 40);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(37, 13);
			this->label32->TabIndex = 8;
			this->label32->Text = L"None";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(33, 16);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(42, 13);
			this->label33->TabIndex = 8;
			this->label33->Text = L"Density";
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->label42);
			this->groupBox12->Controls->Add(this->label41);
			this->groupBox12->Controls->Add(this->label40);
			this->groupBox12->Controls->Add(this->label39);
			this->groupBox12->Controls->Add(this->label38);
			this->groupBox12->Controls->Add(this->label37);
			this->groupBox12->Controls->Add(this->label36);
			this->groupBox12->Controls->Add(this->label34);
			this->groupBox12->Controls->Add(this->label35);
			this->groupBox12->Location = System::Drawing::Point(872, 165);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(103, 151);
			this->groupBox12->TabIndex = 19;
			this->groupBox12->TabStop = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(79, 131);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(13, 13);
			this->label42->TabIndex = 15;
			this->label42->Text = L"0";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(79, 105);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(13, 13);
			this->label41->TabIndex = 14;
			this->label41->Text = L"0";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(79, 47);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(13, 13);
			this->label40->TabIndex = 13;
			this->label40->Text = L"0";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(79, 76);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(13, 13);
			this->label39->TabIndex = 12;
			this->label39->Text = L"0";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(6, 133);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(45, 13);
			this->label38->TabIndex = 11;
			this->label38->Text = L"Route 4";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(6, 108);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(45, 13);
			this->label37->TabIndex = 10;
			this->label37->Text = L"Route 3";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(6, 76);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(45, 13);
			this->label36->TabIndex = 9;
			this->label36->Text = L"Route 2";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(6, 47);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(45, 13);
			this->label34->TabIndex = 8;
			this->label34->Text = L"Route 1";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(22, 16);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(62, 13);
			this->label35->TabIndex = 8;
			this->label35->Text = L"Pedestrians";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(308, 9);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(85, 23);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Exit";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &GUI::button6_Click);
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(997, 698);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->groupBox12);
			this->Controls->Add(this->groupBox11);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"GUI";
			this->Text = L"GUI";
			this->Load += gcnew System::EventHandler(this, &GUI::GUI_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GUI_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox17_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 if(comboBox17->Text == "Live Streaming")
			 {
			 button2->Enabled = false;
			 
			 }

			 if (comboBox17->Text == "Upload a Video"){
		  
			button2->Enabled = true;
			 }

		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	
			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

          openFileDialog1->InitialDirectory = "c:\\"; // default path for searching video
          openFileDialog1->Filter = "Video files (*.avi)|*.avi"; // default file type
          openFileDialog1->FilterIndex = 2;
          openFileDialog1->RestoreDirectory = true;

          if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
          {
             label12->Text = openFileDialog1->FileName;
          }

		

		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label30_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


			 
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			
          openFileDialog1->InitialDirectory = "c:\\"; // default path for searching video
          openFileDialog1->Filter = "Video files (*.avi)|*.avi"; // default file type
          openFileDialog1->FilterIndex = 2;
          openFileDialog1->RestoreDirectory = true;

          if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
          {
             label10->Text = openFileDialog1->FileName;
          }



		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			
			 

          openFileDialog1->InitialDirectory = "c:\\"; // default path for searching video
          openFileDialog1->Filter = "Video files (*.avi)|*.avi"; // default file type
          openFileDialog1->FilterIndex = 2;
          openFileDialog1->RestoreDirectory = true;

          if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
          {
             label11->Text = openFileDialog1->FileName;
          }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

          openFileDialog1->InitialDirectory = "c:\\"; // default path for searching video
          openFileDialog1->Filter = "Video files (*.avi)|*.avi"; // default file type
          openFileDialog1->FilterIndex = 2;
          openFileDialog1->RestoreDirectory = true;

          if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
          {
             label13->Text = openFileDialog1->FileName;
          }
		 }
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

  CvCapture *capture;
  CvCapture *capture1;
  CvCapture *capture2;
  CvCapture *capture3;
  IplImage  *frame;
  IplImage  *frame2nd;
  IplImage  *frame3rd;
  IplImage  *frame4th;

  IplImage* motion = 0;
  IplImage* motion2 = 0;
  IplImage* motion3 = 0;
  IplImage* motion4 = 0;

  int density= 0;
  int input_resize_percent = 100;
    int x = 0;
  int tot1 = 0;
  int tot2 = 0;
  int tot3 = 0;
  int tot4 = 0;
  int cap = 0;
  
  VehicleDetect vehicle;
 // Pedestrians ped;
 
  //Pedestrians ped;
  
		if (comboBox17->Text == "Live Streaming")	
		capture = cvCaptureFromCAM(0); // load camera

		if (comboBox17->Text == "Upload a Video")

		capture = cvCaptureFromFile(static_cast<const char*>(Marshal::StringToHGlobalAnsi(label10->Text).ToPointer())); // load video

		if(capture)
			cap += 1;

		if (comboBox19->Text == "Live Streaming")	
		capture1 = cvCaptureFromCAM(0); // load camera

		if (comboBox19->Text == "Upload a Video")

		capture1 = cvCaptureFromFile(static_cast<const char*>(Marshal::StringToHGlobalAnsi(label11->Text).ToPointer())); // load video

		if(capture1)
			cap += 1;

		if (comboBox18->Text == "Live Streaming")	
		capture2 = cvCaptureFromCAM(0); // load camera

		if (comboBox18->Text == "Upload a Video")

		capture2 = cvCaptureFromFile(static_cast<const char*>(Marshal::StringToHGlobalAnsi(label12->Text).ToPointer())); // load video

		if(capture2)
			cap += 1;


		if (comboBox20->Text == "Live Streaming")	
		capture3 = cvCaptureFromCAM(0); // load camera

		if (comboBox20->Text == "Upload a Video")

		capture3 = cvCaptureFromFile(static_cast<const char*>(Marshal::StringToHGlobalAnsi(label13->Text).ToPointer())); // load video

		if(capture3)
			cap += 1;

  cascade = (CvHaarClassifierCascade*) cvLoad("cars3.xml", 0, 0, 0);
  storage = cvCreateMemStorage(0);
  

  const int KEY_SPACE  = 32;
  const int KEY_ESC    = 27;
 

  if(cap == 0)
	  MessageBox::Show("Please Select At least a One Video");

 

  if(cap == 1){

	  if(comboBox17->Text == "No Selection"){
	  MessageBox::Show("Please select the Video / Live Stream in 1st groupbox");
	  
	  }

	  else{
  assert(cascade && storage && capture);

  IplImage* frame1 = cvQueryFrame(capture);
  IplImage* framemat = cvQueryFrame(capture);


 Pedestrians ped;
  IplImage* out = cvCreateImage( cvSize(framemat->width,framemat->height), 8, 3 );

  IplImage* frame2 = cvLoadImage("novideo.png");
  IplImage* frame3 = cvLoadImage("novideo.png");
  IplImage* frame4 = cvLoadImage("novideo.png");

  frame = cvCreateImage(cvSize((int)((frame1->width*input_resize_percent)/100) , (int)((frame1->height*input_resize_percent)/100)), frame1->depth, frame1->nChannels);
  cvNamedWindow("video", 1);
  int key = 0;
  do
  {
    frame1 = cvQueryFrame(capture);
	framemat = cvQueryFrame(capture);


	if( !motion )
				{
					motion = cvCreateImage( cvSize(frame1->width,frame1->height), 8, 3 );
					cvZero( motion );
					motion->origin = frame1->origin;
				}

	cvSmooth(frame1, out, CV_GAUSSIAN, 3, 3);
	
	x += 1;

    if(!frame1)
      break;

    cvResize(frame1, frame);

		
    int a = vehicle.detect(frame, frame1, Convert::ToInt32(comboBox1->Text), Convert::ToInt32(comboBox4->Text), Convert::ToInt32(comboBox2->Text), Convert::ToInt32(comboBox3->Text),cascade, storage );
	tot1 = tot1 + a;
	

	if(x/10 == 10){
		int a = findLarge(tot1, tot2, tot3, tot4);

		if(a == 1){

			pictureBox1->Image  = Image::FromFile("green.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");


			if((tot1/40)>10){
			label32->Text = "High";
			label32->Refresh();
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				label32->Refresh();
				density=1;
				x=0;
				
			}
		
		}

		if(a == 2){

			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("green.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");

			if(tot2/40>10){
			label32->Text = "High";
			label32->Refresh();
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				label32->Refresh();
				density=1;
				x=0;
				
			}
		
		}


		if(a == 3){

			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("green.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");

			if(tot3/40>10){
			label32->Text = "High";
			label32->Refresh();
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				label32->Refresh();
				density=1;
				x=0;
				
			}
		
		}


		if(a == 4){

			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("green.bmp");

			if(tot4/40>10){
			label32->Text = "High";
			label32->Refresh();
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				label32->Refresh();
				density=1;
				x=0;
				
			}
		
		}

		tot1 = 0;
	
	}
	
	label9->Text = (tot1/40).ToString();
	label9->Refresh();
	label40->Text = (tot1/100).ToString();
	label40->Refresh();

	MotionDetect mot;
	int fir = mot.update_mhi(out, motion, 30, 30, 50);
	
	if(density == 2){

		label31->Text = (10 - x/10).ToString();
		label31->Refresh();
	
	}
		if(density == 1){
			label31->Text = (5 - x/10).ToString();
			label31->Refresh();
			x = 200;
	
		}

	pictureBox9->Image  = gcnew System::Drawing::Bitmap
				(frame->width,frame->height,frame->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame->imageData);

	pictureBox10->Image  = gcnew System::Drawing::Bitmap
				(frame2->width,frame2->height,frame2->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame2->imageData);

	pictureBox11->Image  = gcnew System::Drawing::Bitmap
				(frame3->width,frame3->height,frame3->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame3->imageData);

	pictureBox12->Image  = gcnew System::Drawing::Bitmap
				(frame4->width,frame4->height,frame4->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame4->imageData);

	pictureBox9->Refresh();
	pictureBox10->Refresh();
	pictureBox11->Refresh();
	pictureBox12->Refresh();


    key = cvWaitKey(10);

    if(key == KEY_SPACE)
      key = cvWaitKey(0);

    if(key == KEY_ESC)
      break;

  }while(1);
  }
  }




    if(cap == 2){

		 if(comboBox17->Text == "No Selection" | comboBox19->Text == "No Selection"){
	  MessageBox::Show("Please select the Video / Live Stream in 1st two groupbox");
	  }
		 else{
  assert(cascade && storage && capture);
  assert(cascade && storage && capture1);
  
  bool light1 = false;
  bool light2 = false;

  IplImage* frame1 = cvQueryFrame(capture);
  IplImage* frame2 = cvQueryFrame(capture1);

  frame = cvCreateImage(cvSize((int)((frame1->width*input_resize_percent)/100) , (int)((frame1->height*input_resize_percent)/100)), frame1->depth, frame1->nChannels);
  
  frame2nd = cvCreateImage(cvSize((int)((frame2->width*input_resize_percent)/100) , (int)((frame2->height*input_resize_percent)/100)), frame2->depth, frame2->nChannels);
  
  IplImage* out = cvCreateImage( cvSize(frame->width,frame->height), 8, 3 );
  IplImage* out1 = cvCreateImage( cvSize(frame2nd->width,frame2nd->height), 8, 3 );

  IplImage* frame3 = cvLoadImage("novideo.png");
  IplImage* frame4 = cvLoadImage("novideo.png");

  cvNamedWindow("video", 1);
  int key = 0;
  do
  {
    frame1 = cvQueryFrame(capture);
	frame2 = cvQueryFrame(capture1);

	if( !motion )
				{
					motion = cvCreateImage( cvSize(frame1->width,frame1->height), 8, 3 );
					cvZero( motion );
					motion->origin = frame1->origin;
				}

	if( !motion2 )
				{
					motion2 = cvCreateImage( cvSize(frame2->width,frame2->height), 8, 3 );
					cvZero( motion2 );
					motion2->origin = frame2->origin;
				}

	x += 1;

	cvSmooth(frame1, out, CV_GAUSSIAN, 3, 3);
	cvSmooth(frame2, out1, CV_GAUSSIAN, 3, 3);

    cvResize(frame1, frame);
	 cvResize(frame2, frame2nd);
		
	
    int a = vehicle.detect(frame, frame1, Convert::ToInt32(comboBox1->Text), Convert::ToInt32(comboBox4->Text), Convert::ToInt32(comboBox2->Text), Convert::ToInt32(comboBox3->Text), cascade, storage );
	int b = vehicle.detect(frame2nd, frame2, Convert::ToInt32(comboBox12->Text), Convert::ToInt32(comboBox10->Text), Convert::ToInt32(comboBox11->Text), Convert::ToInt32(comboBox9->Text), cascade, storage);
	tot1 = tot1 + a;
	tot2 = tot2 + b;
	

	if(x/10 == 10){
		int a = findLarge(tot1, tot2, tot3, tot4);

		if(a == 1){
			if( light1 == false){
			pictureBox1->Image  = Image::FromFile("green.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			}

				if( light1 == true){
				light1 = false;
			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("green.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
				
				}

			if(tot1/40>10){
			label32->Text = "High";
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				density=1;
				x=0;
				
			}
		  light1 = true;
		}

		if(a == 2){

			if( light2 == false){
			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("green.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			}
			if( light2 == true){
			pictureBox1->Image  = Image::FromFile("green.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			}


			if(tot2/40>10){
			label32->Text = "High";
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				density=1;
				x=0;
				
			}
		light2 = true;
		}


		if(a == 3){

			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("green.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");

			if(tot3/40>10){
			label32->Text = "High";
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				density=1;
				x=0;
				
			}
		
		}


		if(a == 4){

			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("green.bmp");

			if(tot4/40>10){
			label32->Text = "High";
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				density=1;
				x=0;
				
			}
		
		}

		tot1 = 0;
		tot2 = 0;
	
	}
	
	label9->Text = (tot1/40).ToString();
	label9->Refresh();
	label14->Text = (tot2/60).ToString();
	label14->Refresh();
	label40->Text = (tot1/100).ToString();
	label40->Refresh();
	label39->Text = (tot2/200).ToString();
	label39->Refresh();

	MotionDetect mot;
	int fir = mot.update_mhi(out, motion, 30, 30, 50);
	int sec = mot.update_mhi(out1, motion2, 30, 30, 50);
	


	if(density == 2)
		label31->Text = (10 - x/10).ToString();
	    label31->Refresh();
		if(density == 1){
			label31->Text = (5 - x/10).ToString();
			label31->Refresh();
			x = 200;
		}

	pictureBox9->Image  = gcnew System::Drawing::Bitmap
				(frame->width,frame->height,frame->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame->imageData);

	pictureBox10->Image  = gcnew System::Drawing::Bitmap
				(frame2nd->width,frame2nd->height,frame2nd->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame2nd->imageData);

	pictureBox11->Image  = gcnew System::Drawing::Bitmap
				(frame3->width,frame3->height,frame3->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame3->imageData);

	pictureBox12->Image  = gcnew System::Drawing::Bitmap
				(frame4->width,frame4->height,frame4->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame4->imageData);

	pictureBox9->Refresh();
	pictureBox10->Refresh();
	pictureBox11->Refresh();
	pictureBox12->Refresh();

    key = cvWaitKey(10);

    if(key == KEY_SPACE)
      key = cvWaitKey(0);

    if(key == KEY_ESC)
      break;

  }while(1);

  }
  }



  
    if(cap == 3){

		if(comboBox17->Text == "No Selection" | comboBox19->Text == "No Selection" | comboBox18->Text == "No Selection"){
	  MessageBox::Show("Please select the Video / Live Stream in 1st three groupbox");
	  }

		else{
  bool light1 = false;
  bool light2 = false;
  bool light3 = false;

  
  assert(cascade && storage && capture);
  assert(cascade && storage && capture1);
  assert(cascade && storage && capture2);
  

  IplImage* frame1 = cvQueryFrame(capture);

  frame = cvCreateImage(cvSize((int)((frame1->width*input_resize_percent)/100) , (int)((frame1->height*input_resize_percent)/100)), frame1->depth, frame1->nChannels);

  IplImage* frame2 = cvQueryFrame(capture1);
 
  frame2nd = cvCreateImage(cvSize((int)((frame2->width*input_resize_percent)/100) , (int)((frame2->height*input_resize_percent)/100)), frame2->depth, frame2->nChannels);

  IplImage* frame3 = cvQueryFrame(capture2);
 
  frame3rd = cvCreateImage(cvSize((int)((frame3->width*input_resize_percent)/100) , (int)((frame3->height*input_resize_percent)/100)), frame3->depth, frame3->nChannels);

  IplImage* frame4 = cvLoadImage("novideo.png");



	IplImage* out = cvCreateImage( cvSize(frame1->width,frame1->height), 8, 3 );
	IplImage* out1 = cvCreateImage( cvSize(frame2->width,frame2->height), 8, 3 );
	IplImage* out2 = cvCreateImage( cvSize(frame3->width,frame3->height), 8, 3 );


  cvNamedWindow("video", 1);

  int key = 0;
  do
  {
    frame1 = cvQueryFrame(capture);
	frame2 = cvQueryFrame(capture1);
	frame3 = cvQueryFrame(capture2);
	

	if( !motion )
				{
					motion = cvCreateImage( cvSize(frame1->width,frame1->height), 8, 3 );
					cvZero( motion );
					motion->origin = frame1->origin;
				}
				
if( !motion2 )
				{
					motion2 = cvCreateImage( cvSize(frame2->width,frame2->height), 8, 3 );
					cvZero( motion2 );
					motion2->origin = frame2->origin;
				}
				
if( !motion3 )
				{
					motion3 = cvCreateImage( cvSize(frame3->width,frame3->height), 8, 3 );
					cvZero( motion3 );
					motion3->origin = frame3->origin;
				}
				

	x += 1;


		cvSmooth(frame1, out, CV_GAUSSIAN, 3, 3);
	cvSmooth(frame2, out1, CV_GAUSSIAN, 3, 3);
	cvSmooth(frame3, out2, CV_GAUSSIAN, 3, 3);

    cvResize(frame1, frame);
	cvResize(frame2, frame2nd);
	cvResize(frame3, frame3rd);
	
	
	
    int a = vehicle.detect(frame, frame1, Convert::ToInt32(comboBox1->Text), Convert::ToInt32(comboBox4->Text), Convert::ToInt32(comboBox2->Text), Convert::ToInt32(comboBox3->Text), cascade, storage );
	int b = vehicle.detect(frame2nd, frame2, Convert::ToInt32(comboBox12->Text), Convert::ToInt32(comboBox10->Text), Convert::ToInt32(comboBox11->Text), Convert::ToInt32(comboBox9->Text), cascade, storage);
	int c = vehicle.detect(frame3rd, frame3, Convert::ToInt32(comboBox8->Text), Convert::ToInt32(comboBox6->Text), Convert::ToInt32(comboBox7->Text), Convert::ToInt32(comboBox5->Text), cascade, storage);
	
	tot1 = tot1 + a;
	tot2 = tot2 + b;
	tot3 = tot3 + c;
	

	if(x/10 == 10){
		int a = findLarge(tot1, tot2, tot3, tot4);

		if(a == 1){
			
			if(light1 == false){
			pictureBox1->Image  = Image::FromFile("green.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			}

			if(light1 == true){
			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("green.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			}

			if(tot1/40>10){
			label32->Text = "High";
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				density=1;
				x=0;
				
			}
			light1 = true;
		
		}

		if(a == 2){
			
			
			if(light2 == false){
			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("green.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			}

			if(light2 == true){
			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("green.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			}

			if(tot2/40>10){
			label32->Text = "High";
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				density=1;
				x=0;
				
			}
		light2 = true;
		}


		if(a == 3){
			
			
			if(light3 == false){
			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("green.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			}
			if(light3 == true){
			pictureBox1->Image  = Image::FromFile("green.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			}
			if(tot3/40>10){
			label32->Text = "High";
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				density=1;
				x=0;
				
			}
		light3 = true;
		}


		if(a == 4){

			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("green.bmp");

			if(tot4/40>10){
			label32->Text = "High";
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				density=1;
				x=0;
				
			}
		
		}


		tot1 = 0;
		tot2 = 0;		
		tot3 = 0;
	
	
	}
	
	label9->Text = (tot1/40).ToString();
	label9->Refresh();
	label14->Text = (tot2/60).ToString();
	label14->Refresh();
	label15->Text = (tot3/40).ToString();
	label15->Refresh();
	label40->Text = (tot1/100).ToString();
	label40->Refresh();
	label39->Text = (tot2/200).ToString();
	label39->Refresh();
	label41->Text = (tot3/100).ToString();
	label41->Refresh();
	

	MotionDetect mot;
	int fir = mot.update_mhi(out, motion, 30, 30, 50);
	int sec = mot.update_mhi(out1, motion2, 30, 30, 50);
	int thu = mot.update_mhi(out2, motion3, 30, 30, 50);
	



	if(density == 2)
		label31->Text = (10 - x/10).ToString();
		if(density == 1){
			label31->Text = (5 - x/10).ToString();
			x = 200;
		}
  

	pictureBox9->Image  = gcnew System::Drawing::Bitmap
				(frame->width,frame->height,frame->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame->imageData);

	pictureBox10->Image  = gcnew System::Drawing::Bitmap
				(frame2nd->width,frame2nd->height,frame2nd->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame2nd->imageData);

	pictureBox11->Image  = gcnew System::Drawing::Bitmap
				(frame3rd->width,frame3rd->height,frame3rd->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame3rd->imageData);

	pictureBox12->Image  = gcnew System::Drawing::Bitmap
				(frame4->width,frame4->height,frame4->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame4->imageData);

	pictureBox9->Refresh();
	pictureBox10->Refresh();
	pictureBox11->Refresh();
	pictureBox12->Refresh();



    key = cvWaitKey(10);

    if(key == KEY_SPACE)
      key = cvWaitKey(0);

    if(key == KEY_ESC)
      break;

  }while(1);

  }
  }




  
    if(cap == 4){



  bool light1 = false;
  bool light2 = false;
  bool light3 = false;
  bool light4 = false;

  
  assert(cascade && storage && capture);
  assert(cascade && storage && capture1);
  assert(cascade && storage && capture2);
  assert(cascade && storage && capture3);

  IplImage* frame1 = cvQueryFrame(capture);

  frame = cvCreateImage(cvSize((int)((frame1->width*input_resize_percent)/100) , (int)((frame1->height*input_resize_percent)/100)), frame1->depth, frame1->nChannels);

  IplImage* frame2 = cvQueryFrame(capture1);
 
  frame2nd = cvCreateImage(cvSize((int)((frame2->width*input_resize_percent)/100) , (int)((frame2->height*input_resize_percent)/100)), frame2->depth, frame2->nChannels);

  IplImage* frame3 = cvQueryFrame(capture2);
 
  frame3rd = cvCreateImage(cvSize((int)((frame3->width*input_resize_percent)/100) , (int)((frame3->height*input_resize_percent)/100)), frame3->depth, frame3->nChannels);

  IplImage* frame4 = cvQueryFrame(capture3);
 
  frame4th = cvCreateImage(cvSize((int)((frame4->width*input_resize_percent)/100) , (int)((frame4->height*input_resize_percent)/100)), frame4->depth, frame4->nChannels);

  IplImage* out = cvCreateImage( cvSize(frame1->width,frame1->height), 8, 3 );
	IplImage* out1 = cvCreateImage( cvSize(frame2->width,frame2->height), 8, 3 );
	IplImage* out2 = cvCreateImage( cvSize(frame3->width,frame3->height), 8, 3 );
	IplImage* out3 = cvCreateImage( cvSize(frame4->width,frame4->height), 8, 3 );


  cvNamedWindow("video", 1);
  

  int key = 0;
  do
  {
    frame1 = cvQueryFrame(capture);
	frame2 = cvQueryFrame(capture1);
	frame3 = cvQueryFrame(capture2);
	frame4 = cvQueryFrame(capture3);

	x += 1;


    if(!frame1)
      break;

    cvResize(frame1, frame);
	cvResize(frame2, frame2nd);
	cvResize(frame3, frame3rd);
	cvResize(frame4, frame4th);

	if( !motion )
				{
					motion = cvCreateImage( cvSize(frame1->width,frame1->height), 8, 3 );
					cvZero( motion );
					motion->origin = frame1->origin;
				}
				
if( !motion2 )
				{
					motion2 = cvCreateImage( cvSize(frame2->width,frame2->height), 8, 3 );
					cvZero( motion2 );
					motion2->origin = frame2->origin;
				}
				
if( !motion3 )
				{
					motion3 = cvCreateImage( cvSize(frame3->width,frame3->height), 8, 3 );
					cvZero( motion3 );
					motion3->origin = frame3->origin;
				}
				
if( !motion4 )
				{
					motion4 = cvCreateImage( cvSize(frame4->width,frame4->height), 8, 3 );
					cvZero( motion4 );
					motion4->origin = frame4->origin;
				}
				
	cvSmooth(frame1, out, CV_GAUSSIAN, 3, 3);
	cvSmooth(frame2, out1, CV_GAUSSIAN, 3, 3);
	cvSmooth(frame3, out2, CV_GAUSSIAN, 3, 3);
	cvSmooth(frame4, out3, CV_GAUSSIAN, 3, 3);
	
	
	
    int a = vehicle.detect(frame, frame1, Convert::ToInt32(comboBox1->Text), Convert::ToInt32(comboBox4->Text), Convert::ToInt32(comboBox2->Text), Convert::ToInt32(comboBox3->Text), cascade, storage );
	int b = vehicle.detect(frame2nd, frame2, Convert::ToInt32(comboBox12->Text), Convert::ToInt32(comboBox10->Text), Convert::ToInt32(comboBox11->Text), Convert::ToInt32(comboBox9->Text), cascade, storage);
	int c = vehicle.detect(frame3rd, frame3, Convert::ToInt32(comboBox8->Text), Convert::ToInt32(comboBox6->Text), Convert::ToInt32(comboBox7->Text), Convert::ToInt32(comboBox5->Text), cascade, storage);
	int d = vehicle.detect(frame4th, frame4, Convert::ToInt32(comboBox16->Text), Convert::ToInt32(comboBox14->Text), Convert::ToInt32(comboBox15->Text), Convert::ToInt32(comboBox13->Text), cascade, storage);
	tot1 = tot1 + a;
	tot2 = tot2 + b;
	tot3 = tot3 + c;
	tot4 = tot4 + d;

	if(x/10 == 10){
		int a = findLarge(tot1, tot2, tot3, tot4);

		if(a == 1 | light4 == true){
			 
			  
			if(light1 == false){
			pictureBox1->Image  = Image::FromFile("green.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			}

			if(light1 == true){
			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("green.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			}

			if(tot1/40>10){
			label32->Text = "High";
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				density=1;
				x=0;
				
			}
		light1 = true;
		}

		if(a == 2){
			

			  if(light2 == false){
			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("green.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			  }

			   if(light2 == true){
			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("green.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			  }
			if(tot2/40>10){
			label32->Text = "High";
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				density=1;
				x=0;
				
			}
		light2 = true;
		}


		if(a == 3){
			
			 if(light3 == false){
			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("green.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			 }

			  if(light3 == true){
			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("green.bmp");
			 }

			if(tot3/40>10){
			label32->Text = "High";
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				density=1;
				x=0;
				
			}
		light3 = true;
		}


		if(a == 4){
			

			  if(light4 == false){
			pictureBox1->Image  = Image::FromFile("red.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("green.bmp");
			  }
			   if(light4 == true){
			pictureBox1->Image  = Image::FromFile("green.bmp");
			pictureBox4->Image  = Image::FromFile("red.bmp");
			pictureBox3->Image  = Image::FromFile("red.bmp");
			pictureBox2->Image  = Image::FromFile("red.bmp");
			  }
			if(tot4/40>10){
			label32->Text = "High";
			density=2;
			x=0;
			
			}
			else{
				label32->Text = "Peak";
				density=1;
				x=0;
				
			}
		light4 = false;
		}

		tot1 = 0;
		tot2 = 0;		
		tot3 = 0;
		tot4 = 0;
	
	
	}
	
	label9->Text = (tot1/40).ToString();
	label9->Refresh();
	label14->Text = (tot2/60).ToString();
	label14->Refresh();
	label15->Text = (tot3/40).ToString();
	label15->Refresh();
	label43->Text = (tot4/40).ToString();
	label43->Refresh();
	label40->Text = (tot1/100).ToString();
	label40->Refresh();
	label39->Text = (tot2/200).ToString();
	label39->Refresh();
	label41->Text = (tot3/100).ToString();
	label41->Refresh();
	label42->Text = (tot4/200).ToString();
	label42->Refresh();

	MotionDetect mot;
	int fir = mot.update_mhi(out, motion, 30, 30, 50);
	int sec = mot.update_mhi(out1, motion2, 30, 30, 50);
	int thu = mot.update_mhi(out2, motion3, 30, 30, 50);
	int fort = mot.update_mhi(out3, motion4, 30, 30, 50);
	

	if(density == 2)
		label31->Text = (10 - x/10).ToString();
		label31->Refresh();
		if(density == 1){
			label31->Text = (5 - x/10).ToString();
			label31->Refresh();
		    x = 200;
		}
	
  

	pictureBox9->Image  = gcnew System::Drawing::Bitmap
				(frame->width,frame->height,frame->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame->imageData);

	pictureBox10->Image  = gcnew System::Drawing::Bitmap
				(frame2nd->width,frame2nd->height,frame2nd->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame2nd->imageData);

	pictureBox11->Image  = gcnew System::Drawing::Bitmap
				(frame3rd->width,frame3rd->height,frame3rd->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame3rd->imageData);

	pictureBox12->Image  = gcnew System::Drawing::Bitmap
				(frame4th->width,frame4th->height,frame4th->widthStep,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame4th->imageData);

	pictureBox9->Refresh();
	pictureBox10->Refresh();
	pictureBox11->Refresh();
	pictureBox12->Refresh();

    key = cvWaitKey(10);

    if(key == KEY_SPACE)
      key = cvWaitKey(0);

    if(key == KEY_ESC)
      break;

  }while(1);

  }


 
  cvDestroyAllWindows();
  cvReleaseImage(&frame);
  cvReleaseCapture(&capture);
  cvReleaseImage(&frame2nd);
  cvReleaseCapture(&capture1);
  cvReleaseHaarClassifierCascade(&cascade);
  cvReleaseMemStorage(&storage);

				}

				



int findLarge(int p, int q, int r, int s){

		size_t size = 4;
		std::vector<int> val(size);
		val[0] = p;
		val[1] = q;
		val[2] = r;
		val[3] = s;
		int max = *max_element(val.begin(),val.end());

		if(max == p)
			return 1;
		if(max == q)
			return 2;
		if(max == r)
			return 3;
		if(max == s)
			return 4;

}


private: System::Void comboBox12_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox9_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox8_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox19_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 if(comboBox19->Text == "Live Streaming")
			 {
			 button3->Enabled = false;
			 
			 }

			 if (comboBox19->Text == "Upload a Video"){
		  
			button3->Enabled = true;
			 }
		 }
private: System::Void comboBox18_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			   if(comboBox18->Text == "Live Streaming")
			 {
			 button4->Enabled = false;
			 
			 }

			 if (comboBox18->Text == "Upload a Video"){
		  
			button4->Enabled = true;
			 }
		 }
private: System::Void comboBox20_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			  if(comboBox20->Text == "Live Streaming")
			 {
			 button5->Enabled = false;
			 
			 }

			 if (comboBox20->Text == "Upload a Video"){
		  
			button5->Enabled = true;
			 }}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			  Application::Exit();
			  cvDestroyAllWindows();

		 }
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
