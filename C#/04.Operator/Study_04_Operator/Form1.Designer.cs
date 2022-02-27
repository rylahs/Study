namespace Study_04_Operator
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
            this.tboxResult = new System.Windows.Forms.TextBox();
            this.tboxResultAfter = new System.Windows.Forms.TextBox();
            this.tboxResultBit = new System.Windows.Forms.TextBox();
            this.tboxNumber = new System.Windows.Forms.TextBox();
            this.tboxAndOr = new System.Windows.Forms.TextBox();
            this.btn_lShift = new System.Windows.Forms.Button();
            this.btn_rShift = new System.Windows.Forms.Button();
            this.btn_plusEqual = new System.Windows.Forms.Button();
            this.btn_minusEqual = new System.Windows.Forms.Button();
            this.btn_plusplusA = new System.Windows.Forms.Button();
            this.btn_Aplusplus = new System.Windows.Forms.Button();
            this.btn_and = new System.Windows.Forms.Button();
            this.btn_or = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // tboxResult
            // 
            this.tboxResult.Location = new System.Drawing.Point(27, 27);
            this.tboxResult.Name = "tboxResult";
            this.tboxResult.Size = new System.Drawing.Size(151, 21);
            this.tboxResult.TabIndex = 0;
            this.tboxResult.Text = "0";
            this.tboxResult.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            this.tboxResult.TextChanged += new System.EventHandler(this.tboxResult_TextChanged);
            // 
            // tboxResultAfter
            // 
            this.tboxResultAfter.Location = new System.Drawing.Point(209, 27);
            this.tboxResultAfter.Name = "tboxResultAfter";
            this.tboxResultAfter.Size = new System.Drawing.Size(151, 21);
            this.tboxResultAfter.TabIndex = 1;
            this.tboxResultAfter.Text = "0";
            this.tboxResultAfter.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // tboxResultBit
            // 
            this.tboxResultBit.Enabled = false;
            this.tboxResultBit.Location = new System.Drawing.Point(27, 64);
            this.tboxResultBit.Name = "tboxResultBit";
            this.tboxResultBit.Size = new System.Drawing.Size(151, 21);
            this.tboxResultBit.TabIndex = 2;
            this.tboxResultBit.Text = "0";
            this.tboxResultBit.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // tboxNumber
            // 
            this.tboxNumber.Location = new System.Drawing.Point(27, 125);
            this.tboxNumber.Name = "tboxNumber";
            this.tboxNumber.Size = new System.Drawing.Size(151, 21);
            this.tboxNumber.TabIndex = 3;
            this.tboxNumber.Text = "0";
            this.tboxNumber.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // tboxAndOr
            // 
            this.tboxAndOr.Enabled = false;
            this.tboxAndOr.Location = new System.Drawing.Point(209, 125);
            this.tboxAndOr.Name = "tboxAndOr";
            this.tboxAndOr.Size = new System.Drawing.Size(151, 21);
            this.tboxAndOr.TabIndex = 4;
            this.tboxAndOr.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // btn_lShift
            // 
            this.btn_lShift.Font = new System.Drawing.Font("굴림", 14F);
            this.btn_lShift.Location = new System.Drawing.Point(27, 178);
            this.btn_lShift.Name = "btn_lShift";
            this.btn_lShift.Size = new System.Drawing.Size(65, 58);
            this.btn_lShift.TabIndex = 5;
            this.btn_lShift.Text = "<<";
            this.btn_lShift.UseVisualStyleBackColor = true;
            this.btn_lShift.Click += new System.EventHandler(this.btn_lShift_Click);
            // 
            // btn_rShift
            // 
            this.btn_rShift.Font = new System.Drawing.Font("굴림", 14F);
            this.btn_rShift.Location = new System.Drawing.Point(113, 178);
            this.btn_rShift.Name = "btn_rShift";
            this.btn_rShift.Size = new System.Drawing.Size(65, 58);
            this.btn_rShift.TabIndex = 6;
            this.btn_rShift.Text = ">>";
            this.btn_rShift.UseVisualStyleBackColor = true;
            this.btn_rShift.Click += new System.EventHandler(this.btn_rShift_Click);
            // 
            // btn_plusEqual
            // 
            this.btn_plusEqual.Font = new System.Drawing.Font("굴림", 14F);
            this.btn_plusEqual.Location = new System.Drawing.Point(209, 178);
            this.btn_plusEqual.Name = "btn_plusEqual";
            this.btn_plusEqual.Size = new System.Drawing.Size(65, 58);
            this.btn_plusEqual.TabIndex = 7;
            this.btn_plusEqual.Text = "+=";
            this.btn_plusEqual.UseVisualStyleBackColor = true;
            this.btn_plusEqual.Click += new System.EventHandler(this.btn_plusEqual_Click);
            // 
            // btn_minusEqual
            // 
            this.btn_minusEqual.Font = new System.Drawing.Font("굴림", 14F);
            this.btn_minusEqual.Location = new System.Drawing.Point(295, 178);
            this.btn_minusEqual.Name = "btn_minusEqual";
            this.btn_minusEqual.Size = new System.Drawing.Size(65, 58);
            this.btn_minusEqual.TabIndex = 8;
            this.btn_minusEqual.Text = "-=";
            this.btn_minusEqual.UseVisualStyleBackColor = true;
            this.btn_minusEqual.Click += new System.EventHandler(this.btn_minusEqual_Click);
            // 
            // btn_plusplusA
            // 
            this.btn_plusplusA.Font = new System.Drawing.Font("굴림", 14F);
            this.btn_plusplusA.Location = new System.Drawing.Point(27, 242);
            this.btn_plusplusA.Name = "btn_plusplusA";
            this.btn_plusplusA.Size = new System.Drawing.Size(65, 58);
            this.btn_plusplusA.TabIndex = 9;
            this.btn_plusplusA.Text = "++a";
            this.btn_plusplusA.UseVisualStyleBackColor = true;
            this.btn_plusplusA.Click += new System.EventHandler(this.btn_plusplusA_Click);
            // 
            // btn_Aplusplus
            // 
            this.btn_Aplusplus.Font = new System.Drawing.Font("굴림", 14F);
            this.btn_Aplusplus.Location = new System.Drawing.Point(113, 242);
            this.btn_Aplusplus.Name = "btn_Aplusplus";
            this.btn_Aplusplus.Size = new System.Drawing.Size(65, 58);
            this.btn_Aplusplus.TabIndex = 10;
            this.btn_Aplusplus.Text = "a++";
            this.btn_Aplusplus.UseVisualStyleBackColor = true;
            this.btn_Aplusplus.Click += new System.EventHandler(this.btn_Aplusplus_Click);
            // 
            // btn_and
            // 
            this.btn_and.Font = new System.Drawing.Font("굴림", 14F);
            this.btn_and.Location = new System.Drawing.Point(209, 242);
            this.btn_and.Name = "btn_and";
            this.btn_and.Size = new System.Drawing.Size(65, 58);
            this.btn_and.TabIndex = 11;
            this.btn_and.Text = "&&";
            this.btn_and.UseVisualStyleBackColor = true;
            this.btn_and.Click += new System.EventHandler(this.btn_and_Click);
            // 
            // btn_or
            // 
            this.btn_or.Font = new System.Drawing.Font("굴림", 14F);
            this.btn_or.Location = new System.Drawing.Point(295, 242);
            this.btn_or.Name = "btn_or";
            this.btn_or.Size = new System.Drawing.Size(65, 58);
            this.btn_or.TabIndex = 12;
            this.btn_or.Text = "||";
            this.btn_or.UseVisualStyleBackColor = true;
            this.btn_or.Click += new System.EventHandler(this.btn_or_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(385, 316);
            this.Controls.Add(this.btn_or);
            this.Controls.Add(this.btn_and);
            this.Controls.Add(this.btn_Aplusplus);
            this.Controls.Add(this.btn_plusplusA);
            this.Controls.Add(this.btn_minusEqual);
            this.Controls.Add(this.btn_plusEqual);
            this.Controls.Add(this.btn_rShift);
            this.Controls.Add(this.btn_lShift);
            this.Controls.Add(this.tboxAndOr);
            this.Controls.Add(this.tboxNumber);
            this.Controls.Add(this.tboxResultBit);
            this.Controls.Add(this.tboxResultAfter);
            this.Controls.Add(this.tboxResult);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox tboxResult;
        private System.Windows.Forms.TextBox tboxResultAfter;
        private System.Windows.Forms.TextBox tboxResultBit;
        private System.Windows.Forms.TextBox tboxNumber;
        private System.Windows.Forms.TextBox tboxAndOr;
        private System.Windows.Forms.Button btn_lShift;
        private System.Windows.Forms.Button btn_rShift;
        private System.Windows.Forms.Button btn_plusEqual;
        private System.Windows.Forms.Button btn_minusEqual;
        private System.Windows.Forms.Button btn_plusplusA;
        private System.Windows.Forms.Button btn_Aplusplus;
        private System.Windows.Forms.Button btn_and;
        private System.Windows.Forms.Button btn_or;
    }
}

