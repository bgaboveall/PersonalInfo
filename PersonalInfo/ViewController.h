//
//  ViewController.h
//  PersonalInfo
//
//  Created by Boyko Avramov on 2017-01-23.
//  Copyright © 2017 Boyko Avramov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *fnTextField;

@property (weak, nonatomic) IBOutlet UITextField *lnTextField;

@property (weak, nonatomic) IBOutlet UITextField *phoneTextField;

@property (weak, nonatomic) IBOutlet UITextField *numberTextField;

@property (weak, nonatomic) IBOutlet UITextField *streetTextField;

@property (weak, nonatomic) IBOutlet UITextField *pcTextField;

@property (weak, nonatomic) IBOutlet UITextField *cityTextField;

@property (weak, nonatomic) IBOutlet UITextField *countryTextField;

@property (weak, nonatomic) IBOutlet UIButton *clearButton;

@property (weak, nonatomic) IBOutlet UIButton *modifyButton;

@property (weak, nonatomic) IBOutlet UIButton *submitButton;


@property (weak, nonatomic) IBOutlet UILabel *fnLabel;
@property (weak, nonatomic) IBOutlet UILabel *lnLabel;
@property (weak, nonatomic) IBOutlet UILabel *phoneLabel;

@property (weak, nonatomic) IBOutlet UILabel *numberLabel;

@property (weak, nonatomic) IBOutlet UILabel *streetLabel;

@property (weak, nonatomic) IBOutlet UILabel *pcLabel;
@property (weak, nonatomic) IBOutlet UILabel *cityLabel;

@property (weak, nonatomic) IBOutlet UILabel *countryLabel;







@end

