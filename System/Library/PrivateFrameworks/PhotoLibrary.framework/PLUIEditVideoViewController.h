/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLUIImageViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSDictionary, UIImagePickerController, UINavigationItem, NSString;

@interface PLUIEditVideoViewController : PLUIImageViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	NSDictionary* _options;
	UIImagePickerController* _imagePicker;
	UINavigationItem* _navItem;
	id _delegate;
	Class _viewClass;
	unsigned _canCreateMetadata;
	BOOL _parentInPopoverException;

}

@property (assign,nonatomic) BOOL parentInPopoverException;              //@synthesize parentInPopoverException=_parentInPopoverException - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(void)loadView;
-(id)navigationItem;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)uiipc_imagePickerController;
-(id)uiipc_imagePickerOptions;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(int)cropOverlayMode;
-(Class)_viewClass;
-(BOOL)_displaysFullScreen;
-(BOOL)_editingForThirdParty;
-(void)_setupNavigationItemAndTrimTitle:(id)arg1 ;
-(id)initWithPhoto:(id)arg1 trimTitle:(id)arg2 ;
-(id)initWithVideoURL:(id)arg1 trimTitle:(id)arg2 ;
-(void)setImagePickerOptions:(id)arg1 ;
-(id)_trimMessage;
-(void)setViewClass:(Class)arg1 ;
-(void)didChooseVideoAtURL:(id)arg1 options:(id)arg2 ;
-(void)_cancelTrim:(id)arg1 ;
-(CGRect)previewFrame;
-(void)_trimVideo:(id)arg1 ;
-(double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2 ;
-(BOOL)videoViewCanCreateMetadata:(id)arg1 ;
-(void)videoViewPlaybackDidFail:(id)arg1 ;
-(BOOL)parentInPopoverException;
-(void)setParentInPopoverException:(BOOL)arg1 ;
@end

