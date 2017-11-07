//
//  DSTestTextCell.swift
//  DSTableView
//
//  Created by haochongfeng on 2017/9/12.
//  Copyright © 2017年 haochongfeng. All rights reserved.
//

import UIKit

class DSTestTextCell: UITableViewCell {
    
    var textView: UITextView = {
        let textView = UITextView()
        textView.frame = CGRect(x: 20, y: 5, width: UIScreen.main.bounds.size.width - 40, height: 60)
        textView.backgroundColor = UIColor.yellow
        textView.isScrollEnabled = false
        textView.font = UIFont.systemFont(ofSize: 16)
        textView.textColor = UIColor.black
        return textView
    }()
    
    typealias HeightBlock = ((CGFloat) -> Void)
    var heightBlock: HeightBlock?
    
    override init(style: UITableViewCellStyle, reuseIdentifier: String?) {
        super.init(style: style, reuseIdentifier: reuseIdentifier)
        textView.delegate = self
        contentView.addSubview(textView)
    }
    
    func configure(text: String, heightBlock: HeightBlock?) {
        self.heightBlock = heightBlock
        textView.text = text
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }
}

extension DSTestTextCell: UITextViewDelegate {
    func textViewDidChange(_ textView: UITextView) {
        let rect = textView.sizeThatFits(CGSize(width: UIScreen.main.bounds.size.width - 40, height: 1000))
        heightBlock?(rect.height+10)
        UIView.animate(withDuration: 0.3) { 
            textView.frame = CGRect(x: 20, y: 5, width: UIScreen.main.bounds.size.width - 40, height: rect.height)
        }
    }
}

