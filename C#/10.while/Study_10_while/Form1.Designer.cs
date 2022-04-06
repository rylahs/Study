namespace Study_10_while
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
            this.lblwhileResult = new System.Windows.Forms.Label();
            this.btnwhileResult = new System.Windows.Forms.Button();
            this.lboxwhileResult = new System.Windows.Forms.ListBox();
            this.panel1 = new System.Windows.Forms.Panel();
            this.lblResult = new System.Windows.Forms.Label();
            this.tboxNumber = new System.Windows.Forms.TextBox();
            this.btndoWhileResult = new System.Windows.Forms.Button();
            this.lbldoWhileResult = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // lblwhileResult
            // 
            this.lblwhileResult.BackColor = System.Drawing.SystemColors.ControlDarkDark;
            this.lblwhileResult.Font = new System.Drawing.Font("굴림", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.lblwhileResult.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.lblwhileResult.Location = new System.Drawing.Point(31, 13);
            this.lblwhileResult.Name = "lblwhileResult";
            this.lblwhileResult.Size = new System.Drawing.Size(193, 29);
            this.lblwhileResult.TabIndex = 0;
            this.lblwhileResult.Text = "0, 0, 0, 0, 0, 0.";
            this.lblwhileResult.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // btnwhileResult
            // 
            this.btnwhileResult.Location = new System.Drawing.Point(230, 12);
            this.btnwhileResult.Name = "btnwhileResult";
            this.btnwhileResult.Size = new System.Drawing.Size(108, 29);
            this.btnwhileResult.TabIndex = 1;
            this.btnwhileResult.Text = "로또 번호";
            this.btnwhileResult.UseVisualStyleBackColor = true;
            this.btnwhileResult.Click += new System.EventHandler(this.btnwhileResult_Click);
            // 
            // lboxwhileResult
            // 
            this.lboxwhileResult.FormattingEnabled = true;
            this.lboxwhileResult.ItemHeight = 12;
            this.lboxwhileResult.Location = new System.Drawing.Point(35, 46);
            this.lboxwhileResult.Name = "lboxwhileResult";
            this.lboxwhileResult.Size = new System.Drawing.Size(189, 172);
            this.lboxwhileResult.TabIndex = 2;
            // 
            // panel1
            // 
            this.panel1.Location = new System.Drawing.Point(35, 225);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(288, 10);
            this.panel1.TabIndex = 3;
            // 
            // lblResult
            // 
            this.lblResult.AutoSize = true;
            this.lblResult.Font = new System.Drawing.Font("굴림", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.lblResult.Location = new System.Drawing.Point(35, 242);
            this.lblResult.Name = "lblResult";
            this.lblResult.Size = new System.Drawing.Size(241, 16);
            this.lblResult.TabIndex = 4;
            this.lblResult.Text = "1 ~ 100 안에 숫자를 선택하세요.";
            // 
            // tboxNumber
            // 
            this.tboxNumber.Font = new System.Drawing.Font("굴림", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.tboxNumber.Location = new System.Drawing.Point(35, 262);
            this.tboxNumber.Name = "tboxNumber";
            this.tboxNumber.Size = new System.Drawing.Size(39, 26);
            this.tboxNumber.TabIndex = 5;
            this.tboxNumber.Text = "1";
            // 
            // btndoWhileResult
            // 
            this.btndoWhileResult.Location = new System.Drawing.Point(93, 262);
            this.btndoWhileResult.Name = "btndoWhileResult";
            this.btndoWhileResult.Size = new System.Drawing.Size(108, 29);
            this.btndoWhileResult.TabIndex = 6;
            this.btndoWhileResult.Text = "선택 번호 뽑기";
            this.btndoWhileResult.UseVisualStyleBackColor = true;
            this.btndoWhileResult.Click += new System.EventHandler(this.btndoWhileResult_Click);
            // 
            // lbldoWhileResult
            // 
            this.lbldoWhileResult.AutoSize = true;
            this.lbldoWhileResult.Font = new System.Drawing.Font("굴림", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.lbldoWhileResult.Location = new System.Drawing.Point(35, 311);
            this.lbldoWhileResult.Name = "lbldoWhileResult";
            this.lbldoWhileResult.Size = new System.Drawing.Size(15, 16);
            this.lbldoWhileResult.TabIndex = 7;
            this.lbldoWhileResult.Text = "-";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(389, 349);
            this.Controls.Add(this.lbldoWhileResult);
            this.Controls.Add(this.btndoWhileResult);
            this.Controls.Add(this.tboxNumber);
            this.Controls.Add(this.lblResult);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.lboxwhileResult);
            this.Controls.Add(this.btnwhileResult);
            this.Controls.Add(this.lblwhileResult);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblwhileResult;
        private System.Windows.Forms.Button btnwhileResult;
        private System.Windows.Forms.ListBox lboxwhileResult;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label lblResult;
        private System.Windows.Forms.TextBox tboxNumber;
        private System.Windows.Forms.Button btndoWhileResult;
        private System.Windows.Forms.Label lbldoWhileResult;
    }
}

