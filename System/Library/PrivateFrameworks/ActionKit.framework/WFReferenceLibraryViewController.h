/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIReferenceLibraryViewController.h>

@protocol WFReferenceLibraryViewControllerDelegate;
@interface WFReferenceLibraryViewController : UIReferenceLibraryViewController {

	id<WFReferenceLibraryViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFReferenceLibraryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFReferenceLibraryViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFReferenceLibraryViewControllerDelegate>)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

