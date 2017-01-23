//
//  ViewController.m
//  PersonalInfo
//
//  Created by Boyko Avramov on 2017-01-23.
//  Copyright © 2017 Boyko Avramov. All rights reserved.
//

#import "ViewController.h" 

@interface ViewController ()

@end

@implementation ViewController

- (void) hideLabels {
    [self.fnLabel setHidden:YES];
    [self.lnLabel setHidden:YES];
    [self.phoneLabel setHidden:YES];
    [self.numberLabel setHidden:YES];
    [self.streetLabel setHidden:YES];
    [self.pcLabel setHidden:YES];
    [self.cityLabel setHidden:YES];
    [self.countryLabel setHidden:YES];
}

- (void)viewDidLoad {
    [self hideLabels];
    [self.modifyButton setHidden:YES];
    [self.clearButton setHidden:YES];
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)clearDidTouchUpInside:(id)sender {
}

- (IBAction)modifyDidTouchUpInside:(id)sender {
}

- (IBAction)submitDidTouchUpInside:(id)sender {
}

@end
