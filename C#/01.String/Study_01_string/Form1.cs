using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Study_01_string
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void runButton_Click(object sender, EventArgs e)
        {
            //Sample, Test, Text
            string strText = lblText.Text;


            lblContain.Text = strText.Contains("Text").ToString();
            lblEqual.Text = strText.Equals("Text").ToString();
            lblLength.Text = strText.Length.ToString();
            lblReplace.Text = strText.Replace("Test", "I Can").ToString();

            string[] strSplit = strText.Split(',');
            lblSplit_a.Text = strSplit[0].ToString();
            lblSplit_b.Text = strSplit[1].ToString();
            lblSplit_c.Text = strSplit[2].ToString().TrimStart();

            lblSubstring.Text = strText.Substring(3, 5).ToString();
            lblToLower.Text = strText.ToLower().ToString();
            lblToUpper.Text = strText.ToUpper().ToString();
            lblTrim.Text = strText.Trim();

        }
    }
}
