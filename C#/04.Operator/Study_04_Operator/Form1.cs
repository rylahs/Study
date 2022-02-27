using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Study_04_Operator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btn_lShift_Click(object sender, EventArgs e)
        {
            int iResult = 0;
            int iTemp = int.Parse(tboxResult.Text);
            int iNumber = int.Parse(tboxNumber.Text);

            iResult = iTemp << iNumber;

            tboxResult.Text = iResult.ToString();
        }

        private void tboxResult_TextChanged(object sender, EventArgs e)
        {
            tboxResultBit.Text = Convert.ToString(int.Parse(tboxResult.Text), 2);
        }

        private void btn_rShift_Click(object sender, EventArgs e)
        {
            int iResult = 0;
            int iTemp = int.Parse(tboxResult.Text);
            int iNumber = int.Parse(tboxNumber.Text);

            iResult = iTemp >> iNumber;

            tboxResult.Text = iResult.ToString();
        }

        private void btn_plusEqual_Click(object sender, EventArgs e)
        {
            int iTemp = int.Parse(tboxResult.Text);
            int iNumber = int.Parse(tboxNumber.Text);

            iTemp += iNumber;

            tboxResult.Text = iTemp.ToString();
        }

        private void btn_minusEqual_Click(object sender, EventArgs e)
        {
            int iTemp = int.Parse(tboxResult.Text);
            int iNumber = int.Parse(tboxNumber.Text);

            iTemp -= iNumber;

            tboxResult.Text = iTemp.ToString();
        }

        private void btn_plusplusA_Click(object sender, EventArgs e)
        {
            int iTemp = int.Parse(tboxResult.Text);

            tboxResult.Text = (++iTemp).ToString();
            tboxResultAfter.Text = iTemp.ToString();
        }

        private void btn_Aplusplus_Click(object sender, EventArgs e)
        {
            int iTemp = int.Parse(tboxResult.Text);

            tboxResult.Text = (iTemp++).ToString();
            tboxResultAfter.Text = iTemp.ToString();
        }

        private void btn_and_Click(object sender, EventArgs e)
        {
            int iTemp1 = int.Parse(tboxResult.Text);
            int iTemp2 = int.Parse(tboxResultAfter.Text);
            int iNumber = int.Parse(tboxNumber.Text);

            bool bResult = (iTemp1 > iNumber && iTemp2 > iNumber);

            tboxAndOr.Text = bResult.ToString();
        }

        private void btn_or_Click(object sender, EventArgs e)
        {
            int iTemp1 = int.Parse(tboxResult.Text);
            int iTemp2 = int.Parse(tboxResultAfter.Text);
            int iNumber = int.Parse(tboxNumber.Text);

            bool bResult = (iTemp1 > iNumber || iTemp2 > iNumber);

            tboxAndOr.Text = bResult.ToString();
        }
    }
}
