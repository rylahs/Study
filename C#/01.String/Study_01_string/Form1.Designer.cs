namespace Study_01_string
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.lblText = new System.Windows.Forms.Label();
            this.runButton = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.lblContain = new System.Windows.Forms.Label();
            this.lblEqual = new System.Windows.Forms.Label();
            this.lblLength = new System.Windows.Forms.Label();
            this.lblReplace = new System.Windows.Forms.Label();
            this.lblSplit_a = new System.Windows.Forms.Label();
            this.lblSubstring = new System.Windows.Forms.Label();
            this.lblToLower = new System.Windows.Forms.Label();
            this.lblToUpper = new System.Windows.Forms.Label();
            this.lblTrim = new System.Windows.Forms.Label();
            this.lblSplit_b = new System.Windows.Forms.Label();
            this.lblSplit_c = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // lblText
            // 
            this.lblText.AutoSize = true;
            this.lblText.Font = new System.Drawing.Font("굴림", 12F);
            this.lblText.Location = new System.Drawing.Point(68, 59);
            this.lblText.Name = "lblText";
            this.lblText.Size = new System.Drawing.Size(144, 16);
            this.lblText.TabIndex = 0;
            this.lblText.Text = "Sample, Test, Text";
            // 
            // runButton
            // 
            this.runButton.Font = new System.Drawing.Font("굴림", 11F);
            this.runButton.Location = new System.Drawing.Point(292, 52);
            this.runButton.Name = "runButton";
            this.runButton.Size = new System.Drawing.Size(75, 23);
            this.runButton.TabIndex = 1;
            this.runButton.Text = "실행";
            this.runButton.UseVisualStyleBackColor = true;
            this.runButton.Click += new System.EventHandler(this.runButton_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("굴림", 12F);
            this.label1.Location = new System.Drawing.Point(68, 117);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(63, 16);
            this.label1.TabIndex = 2;
            this.label1.Text = "Contain";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("굴림", 12F);
            this.label2.Location = new System.Drawing.Point(68, 150);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(56, 16);
            this.label2.TabIndex = 2;
            this.label2.Text = "Equals";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("굴림", 12F);
            this.label3.Location = new System.Drawing.Point(68, 186);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(57, 16);
            this.label3.TabIndex = 2;
            this.label3.Text = "Length";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("굴림", 12F);
            this.label4.Location = new System.Drawing.Point(68, 216);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(65, 16);
            this.label4.TabIndex = 2;
            this.label4.Text = "Replace";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("굴림", 12F);
            this.label5.Location = new System.Drawing.Point(68, 249);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(37, 16);
            this.label5.TabIndex = 2;
            this.label5.Text = "Split";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("굴림", 12F);
            this.label6.Location = new System.Drawing.Point(318, 117);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(75, 16);
            this.label6.TabIndex = 2;
            this.label6.Text = "Substring";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("굴림", 12F);
            this.label7.Location = new System.Drawing.Point(318, 150);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(69, 16);
            this.label7.TabIndex = 2;
            this.label7.Text = "ToLower";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Font = new System.Drawing.Font("굴림", 12F);
            this.label8.Location = new System.Drawing.Point(318, 186);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(69, 16);
            this.label8.TabIndex = 2;
            this.label8.Text = "ToUpper";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Font = new System.Drawing.Font("굴림", 12F);
            this.label9.Location = new System.Drawing.Point(318, 216);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(37, 16);
            this.label9.TabIndex = 2;
            this.label9.Text = "Trim";
            // 
            // lblContain
            // 
            this.lblContain.AutoSize = true;
            this.lblContain.Font = new System.Drawing.Font("굴림", 12F);
            this.lblContain.Location = new System.Drawing.Point(146, 117);
            this.lblContain.Name = "lblContain";
            this.lblContain.Size = new System.Drawing.Size(15, 16);
            this.lblContain.TabIndex = 2;
            this.lblContain.Text = "-";
            // 
            // lblEqual
            // 
            this.lblEqual.AutoSize = true;
            this.lblEqual.Font = new System.Drawing.Font("굴림", 12F);
            this.lblEqual.Location = new System.Drawing.Point(146, 150);
            this.lblEqual.Name = "lblEqual";
            this.lblEqual.Size = new System.Drawing.Size(15, 16);
            this.lblEqual.TabIndex = 3;
            this.lblEqual.Text = "-";
            // 
            // lblLength
            // 
            this.lblLength.AutoSize = true;
            this.lblLength.Font = new System.Drawing.Font("굴림", 12F);
            this.lblLength.Location = new System.Drawing.Point(146, 186);
            this.lblLength.Name = "lblLength";
            this.lblLength.Size = new System.Drawing.Size(15, 16);
            this.lblLength.TabIndex = 3;
            this.lblLength.Text = "-";
            // 
            // lblReplace
            // 
            this.lblReplace.AutoSize = true;
            this.lblReplace.Font = new System.Drawing.Font("굴림", 12F);
            this.lblReplace.Location = new System.Drawing.Point(146, 216);
            this.lblReplace.Name = "lblReplace";
            this.lblReplace.Size = new System.Drawing.Size(15, 16);
            this.lblReplace.TabIndex = 3;
            this.lblReplace.Text = "-";
            // 
            // lblSplit_a
            // 
            this.lblSplit_a.AutoSize = true;
            this.lblSplit_a.Font = new System.Drawing.Font("굴림", 12F);
            this.lblSplit_a.Location = new System.Drawing.Point(146, 249);
            this.lblSplit_a.Name = "lblSplit_a";
            this.lblSplit_a.Size = new System.Drawing.Size(15, 16);
            this.lblSplit_a.TabIndex = 3;
            this.lblSplit_a.Text = "-";
            // 
            // lblSubstring
            // 
            this.lblSubstring.AutoSize = true;
            this.lblSubstring.Font = new System.Drawing.Font("굴림", 12F);
            this.lblSubstring.Location = new System.Drawing.Point(423, 117);
            this.lblSubstring.Name = "lblSubstring";
            this.lblSubstring.Size = new System.Drawing.Size(15, 16);
            this.lblSubstring.TabIndex = 3;
            this.lblSubstring.Text = "-";
            // 
            // lblToLower
            // 
            this.lblToLower.AutoSize = true;
            this.lblToLower.Font = new System.Drawing.Font("굴림", 12F);
            this.lblToLower.Location = new System.Drawing.Point(423, 150);
            this.lblToLower.Name = "lblToLower";
            this.lblToLower.Size = new System.Drawing.Size(15, 16);
            this.lblToLower.TabIndex = 3;
            this.lblToLower.Text = "-";
            // 
            // lblToUpper
            // 
            this.lblToUpper.AutoSize = true;
            this.lblToUpper.Font = new System.Drawing.Font("굴림", 12F);
            this.lblToUpper.Location = new System.Drawing.Point(423, 186);
            this.lblToUpper.Name = "lblToUpper";
            this.lblToUpper.Size = new System.Drawing.Size(15, 16);
            this.lblToUpper.TabIndex = 3;
            this.lblToUpper.Text = "-";
            // 
            // lblTrim
            // 
            this.lblTrim.AutoSize = true;
            this.lblTrim.Font = new System.Drawing.Font("굴림", 12F);
            this.lblTrim.Location = new System.Drawing.Point(423, 216);
            this.lblTrim.Name = "lblTrim";
            this.lblTrim.Size = new System.Drawing.Size(15, 16);
            this.lblTrim.TabIndex = 3;
            this.lblTrim.Text = "-";
            // 
            // lblSplit_b
            // 
            this.lblSplit_b.AutoSize = true;
            this.lblSplit_b.Font = new System.Drawing.Font("굴림", 12F);
            this.lblSplit_b.Location = new System.Drawing.Point(146, 291);
            this.lblSplit_b.Name = "lblSplit_b";
            this.lblSplit_b.Size = new System.Drawing.Size(15, 16);
            this.lblSplit_b.TabIndex = 3;
            this.lblSplit_b.Text = "-";
            // 
            // lblSplit_c
            // 
            this.lblSplit_c.AutoSize = true;
            this.lblSplit_c.Font = new System.Drawing.Font("굴림", 12F);
            this.lblSplit_c.Location = new System.Drawing.Point(146, 330);
            this.lblSplit_c.Name = "lblSplit_c";
            this.lblSplit_c.Size = new System.Drawing.Size(15, 16);
            this.lblSplit_c.TabIndex = 3;
            this.lblSplit_c.Text = "-";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(632, 360);
            this.Controls.Add(this.lblTrim);
            this.Controls.Add(this.lblToUpper);
            this.Controls.Add(this.lblToLower);
            this.Controls.Add(this.lblSubstring);
            this.Controls.Add(this.lblSplit_c);
            this.Controls.Add(this.lblSplit_b);
            this.Controls.Add(this.lblSplit_a);
            this.Controls.Add(this.lblReplace);
            this.Controls.Add(this.lblLength);
            this.Controls.Add(this.lblEqual);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.lblContain);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.runButton);
            this.Controls.Add(this.lblText);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblText;
        private System.Windows.Forms.Button runButton;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label lblContain;
        private System.Windows.Forms.Label lblEqual;
        private System.Windows.Forms.Label lblLength;
        private System.Windows.Forms.Label lblReplace;
        private System.Windows.Forms.Label lblSplit_a;
        private System.Windows.Forms.Label lblSubstring;
        private System.Windows.Forms.Label lblToLower;
        private System.Windows.Forms.Label lblToUpper;
        private System.Windows.Forms.Label lblTrim;
        private System.Windows.Forms.Label lblSplit_b;
        private System.Windows.Forms.Label lblSplit_c;
    }
}

