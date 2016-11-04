//
//  ViewController.h
//  MNPhotoGallery
//
//  Created by Student P_10 on 04/11/16.
//  Copyright © 2016 Mrunalini Nemade. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate,MFMailComposeViewControllerDelegate,MFMessageComposeViewControllerDelegate>

@property (strong, nonatomic) IBOutlet UIImageView *imageView;

- (IBAction)actionOpenCamera:(id)sender;

- (IBAction)actionOpenPhotoAlbum:(id)sender;

- (IBAction)actionMail:(id)sender;

- (IBAction)actionSMS:(id)sender;

@end

