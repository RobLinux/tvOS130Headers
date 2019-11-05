/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <ReplayKit/RPSystemBroadcastPickerViewControllerDelegate.h>

@class RPBroadcastPickerHostViewController, NSString;

@interface RPSystemBroadcastPickerViewController : UIViewController <RPSystemBroadcastPickerViewControllerDelegate> {

	RPBroadcastPickerHostViewController* _hostViewController;

}

@property (nonatomic,retain) RPBroadcastPickerHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHostViewController:(RPBroadcastPickerHostViewController *)arg1 ;
-(RPBroadcastPickerHostViewController *)hostViewController;
-(void)viewControllerDidFinish;
@end

