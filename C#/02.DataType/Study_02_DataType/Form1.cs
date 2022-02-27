using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Study_02_DataType
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnShort_Click(object sender, EventArgs e)
        {
            try
            {
                short sNumber = short.Parse(inputData.Text);

                lblShort.Text = sNumber.ToString();
                lblException.Text = "";
            }
            catch (Exception ex)
            {
                lblException.Text = ex.ToString();
            }
        }

        private void btnInt_Click(object sender, EventArgs e)
        {
            try
            {
                int iNumber = int.Parse(inputData.Text);

                lblInt.Text = iNumber.ToString();
                lblException.Text = "";
            }
            catch (Exception ex)
            {
                lblException.Text = ex.ToString();
            }
        }

        private void btnDouble_Click(object sender, EventArgs e)
        {
            try
            {
                double dNumber = double.Parse(inputData.Text);

                lblDouble.Text = dNumber.ToString();
                lblException.Text = "";
            }
            catch (Exception ex)
            {
                lblException.Text = ex.ToString();
            }
        }

        private void autobtn_Click(object sender, EventArgs e)
        {
            short sNumber = 0;
            int iNumber = 0;
            double dNumber = 0;

           if (short.TryParse(inputData.Text, out sNumber))
           {
                lblShort.Text = inputData.Text.ToString();
           }
           else if (int.TryParse(inputData.Text, out iNumber))
            {
                lblInt.Text = inputData.Text.ToString();
            }
            else if (double.TryParse(inputData.Text, out dNumber))
            {
                lblDouble.Text = inputData.Text.ToString();
            }
            else
            {
                lblException.Text = "변환이 불가능합니다.";
            }
        }
    }
}
