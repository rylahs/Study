namespace Study_11_StructClass
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
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.pboxSun = new System.Windows.Forms.PictureBox();
            this.pboxMoon = new System.Windows.Forms.PictureBox();
            this.pboxStar = new System.Windows.Forms.PictureBox();
            this.pboxNone = new System.Windows.Forms.PictureBox();
            this.rdoPlayer1 = new System.Windows.Forms.RadioButton();
            this.rdoPlayer2 = new System.Windows.Forms.RadioButton();
            this.lboxResult1 = new System.Windows.Forms.ListBox();
            this.lboxResult2 = new System.Windows.Forms.ListBox();
            this.label3 = new System.Windows.Forms.Label();
            this.lboxNow = new System.Windows.Forms.ListBox();
            ((System.ComponentModel.ISupportInitialize)(this.pboxSun)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pboxMoon)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pboxStar)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pboxNone)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("굴림", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label1.Location = new System.Drawing.Point(13, 13);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(366, 16);
            this.label1.TabIndex = 0;
            this.label1.Text = "- Player는 한번 씩 돌아가면서 그림을 선택합니다.";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("굴림", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label2.Location = new System.Drawing.Point(12, 35);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(503, 16);
            this.label2.TabIndex = 1;
            this.label2.Text = "- 각 5회 진행 후 해, 달, 별 숫자의 합이 가장 높은 사람이 승리합니다.";
            // 
            // pboxSun
            // 
            this.pboxSun.Image = global::Study_11_StructClass.Properties.Resources._1;
            this.pboxSun.Location = new System.Drawing.Point(15, 62);
            this.pboxSun.Name = "pboxSun";
            this.pboxSun.Size = new System.Drawing.Size(153, 199);
            this.pboxSun.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pboxSun.TabIndex = 2;
            this.pboxSun.TabStop = false;
            this.pboxSun.Click += new System.EventHandler(this.pboxSun_Click);
            // 
            // pboxMoon
            // 
            this.pboxMoon.Image = global::Study_11_StructClass.Properties.Resources._2;
            this.pboxMoon.Location = new System.Drawing.Point(174, 62);
            this.pboxMoon.Name = "pboxMoon";
            this.pboxMoon.Size = new System.Drawing.Size(153, 199);
            this.pboxMoon.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pboxMoon.TabIndex = 3;
            this.pboxMoon.TabStop = false;
            this.pboxMoon.Click += new System.EventHandler(this.pboxMoon_Click);
            // 
            // pboxStar
            // 
            this.pboxStar.Image = global::Study_11_StructClass.Properties.Resources._3;
            this.pboxStar.Location = new System.Drawing.Point(333, 62);
            this.pboxStar.Name = "pboxStar";
            this.pboxStar.Size = new System.Drawing.Size(153, 199);
            this.pboxStar.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pboxStar.TabIndex = 4;
            this.pboxStar.TabStop = false;
            this.pboxStar.Click += new System.EventHandler(this.pboxStar_Click);
            // 
            // pboxNone
            // 
            this.pboxNone.BackColor = System.Drawing.SystemColors.ControlDark;
            this.pboxNone.Location = new System.Drawing.Point(492, 62);
            this.pboxNone.Name = "pboxNone";
            this.pboxNone.Size = new System.Drawing.Size(153, 199);
            this.pboxNone.TabIndex = 5;
            this.pboxNone.TabStop = false;
            this.pboxNone.Click += new System.EventHandler(this.pboxNone_Click);
            // 
            // rdoPlayer1
            // 
            this.rdoPlayer1.AutoSize = true;
            this.rdoPlayer1.Location = new System.Drawing.Point(16, 280);
            this.rdoPlayer1.Name = "rdoPlayer1";
            this.rdoPlayer1.Size = new System.Drawing.Size(65, 16);
            this.rdoPlayer1.TabIndex = 6;
            this.rdoPlayer1.TabStop = true;
            this.rdoPlayer1.Text = "Player1";
            this.rdoPlayer1.UseVisualStyleBackColor = true;
            // 
            // rdoPlayer2
            // 
            this.rdoPlayer2.AutoSize = true;
            this.rdoPlayer2.Location = new System.Drawing.Point(333, 280);
            this.rdoPlayer2.Name = "rdoPlayer2";
            this.rdoPlayer2.Size = new System.Drawing.Size(65, 16);
            this.rdoPlayer2.TabIndex = 7;
            this.rdoPlayer2.TabStop = true;
            this.rdoPlayer2.Text = "Player2";
            this.rdoPlayer2.UseVisualStyleBackColor = true;
            // 
            // lboxResult1
            // 
            this.lboxResult1.FormattingEnabled = true;
            this.lboxResult1.ItemHeight = 12;
            this.lboxResult1.Location = new System.Drawing.Point(16, 303);
            this.lboxResult1.Name = "lboxResult1";
            this.lboxResult1.Size = new System.Drawing.Size(311, 100);
            this.lboxResult1.TabIndex = 8;
            // 
            // lboxResult2
            // 
            this.lboxResult2.FormattingEnabled = true;
            this.lboxResult2.ItemHeight = 12;
            this.lboxResult2.Location = new System.Drawing.Point(333, 303);
            this.lboxResult2.Name = "lboxResult2";
            this.lboxResult2.Size = new System.Drawing.Size(312, 100);
            this.lboxResult2.TabIndex = 9;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(14, 429);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(51, 12);
            this.label3.TabIndex = 10;
            this.label3.Text = "- 상황판";
            // 
            // lboxNow
            // 
            this.lboxNow.BackColor = System.Drawing.SystemColors.ControlDarkDark;
            this.lboxNow.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.lboxNow.FormattingEnabled = true;
            this.lboxNow.ItemHeight = 12;
            this.lboxNow.Location = new System.Drawing.Point(16, 444);
            this.lboxNow.Name = "lboxNow";
            this.lboxNow.Size = new System.Drawing.Size(632, 136);
            this.lboxNow.TabIndex = 11;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(665, 620);
            this.Controls.Add(this.lboxNow);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.lboxResult2);
            this.Controls.Add(this.lboxResult1);
            this.Controls.Add(this.rdoPlayer2);
            this.Controls.Add(this.rdoPlayer1);
            this.Controls.Add(this.pboxNone);
            this.Controls.Add(this.pboxStar);
            this.Controls.Add(this.pboxMoon);
            this.Controls.Add(this.pboxSun);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.pboxSun)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pboxMoon)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pboxStar)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pboxNone)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.PictureBox pboxSun;
        private System.Windows.Forms.PictureBox pboxMoon;
        private System.Windows.Forms.PictureBox pboxStar;
        private System.Windows.Forms.PictureBox pboxNone;
        private System.Windows.Forms.RadioButton rdoPlayer1;
        private System.Windows.Forms.RadioButton rdoPlayer2;
        private System.Windows.Forms.ListBox lboxResult1;
        private System.Windows.Forms.ListBox lboxResult2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.ListBox lboxNow;
    }
}

