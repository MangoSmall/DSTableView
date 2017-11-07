//
//  DSTestTextViewController.swift
//  DSTableView
//
//  Created by haochongfeng on 2017/9/12.
//  Copyright © 2017年 haochongfeng. All rights reserved.
//

import UIKit

class DSTestTextViewController: UIViewController {
    
    var userDefault = UserDefaults.standard

    var tableView: UITableView = {
        let tableView = UITableView(frame: CGRect(x: 0, y: 0, width: UIScreen.main.bounds.size.width, height: UIScreen.main.bounds.size.height - 64), style: .grouped)
        return tableView
    }()
    
    var data: String!
    
    var height: CGFloat = 40
    
    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = UIColor.white
        tableView.delegate = self
        tableView.dataSource = self
        tableView.register(DSTestTextCell.self, forCellReuseIdentifier: NSStringFromClass(DSTestTextCell.self))
        view.addSubview(tableView)
        data = (userDefault.object(forKey: "key") as? String) ?? ""
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
}

extension DSTestTextViewController: UITableViewDelegate, UITableViewDataSource {
    func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return 1
    }
    
    func tableView(_ tableView: UITableView, estimatedHeightForRowAt indexPath: IndexPath) -> CGFloat {
        return 200
    }
    
    func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
        return height
    }
    
    func tableView(_ tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        return 30
    }
    
    func tableView(_ tableView: UITableView, heightForFooterInSection section: Int) -> CGFloat {
        return 0.1
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: NSStringFromClass(DSTestTextCell.self), for: indexPath)
        cell.selectionStyle = .none
        userDefault.setValue(data, forKey: "key")
        return cell
    }
    
    func tableView(_ tableView: UITableView, willDisplay cell: UITableViewCell, forRowAt indexPath: IndexPath) {
        if let cell = cell as? DSTestTextCell {
            cell.configure(text: data, heightBlock: { (height) in
                print("改变高度 \(height)")
                self.height = height
                tableView.beginUpdates()
                tableView.endUpdates()
            })
        }
    }
}
