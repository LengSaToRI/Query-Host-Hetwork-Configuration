
// Exp2.4Dlg.h: 头文件
//

#pragma once


// CExp24Dlg 对话框
class CExp24Dlg : public CDialogEx
{
// 构造
public:
	CExp24Dlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EXP24_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton1();
	CString m_Edit;
	CListBox m_List;
	afx_msg void OnLbnSelchangeList1();
protected:
	afx_msg LRESULT OnMessage(WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnBnClickedButton2();
};
