/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <MediaPlayer/MPClientMediaPickerController.h>
#import <MediaPlayer/MPMusicMediaPickerClientController.h>

@protocol MPMediaPickerControllerDelegate, MPMediaPickerRemoteViewLoader;
@class MPMediaPickerConfiguration, NSString;

@interface MPMediaPickerController : UIViewController <MPClientMediaPickerController, MPMusicMediaPickerClientController> {

	MPMediaPickerConfiguration* _configuration;
	id<MPMediaPickerControllerDelegate> _delegate;
	id<MPMediaPickerRemoteViewLoader> _loader;

}

@property (nonatomic,retain) id<MPMediaPickerRemoteViewLoader> loader;                         //@synthesize loader=_loader - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaTypes; 
@property (assign,nonatomic,__weak) id<MPMediaPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsPickingMultipleItems; 
@property (assign,nonatomic) BOOL showsCloudItems; 
@property (assign,nonatomic) BOOL showsItemsWithProtectedAssets; 
@property (nonatomic,copy) NSString * prompt; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(BOOL)useNewPicker;
+(void)preheatMediaPicker;
-(id)initWithCoder:(id)arg1 ;
-(id<MPMediaPickerControllerDelegate>)delegate;
-(void)setDelegate:(id<MPMediaPickerControllerDelegate>)arg1 ;
-(id)configuration;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithConfiguration:(id)arg1 ;
-(long long)selectionMode;
-(id<MPMediaPickerRemoteViewLoader>)loader;
-(unsigned long long)mediaTypes;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_sharedInit;
-(long long)modalPresentationStyle;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setLoader:(id<MPMediaPickerRemoteViewLoader>)arg1 ;
-(void)remoteMediaPickerDidCancel;
-(void)remoteMediaPickerDidPickMediaItems:(id)arg1 ;
-(void)remoteMediaPickerDidPickPlaybackArchive:(id)arg1 ;
-(id)initWithMediaTypes:(unsigned long long)arg1 ;
-(id)initWithSupportedTypeIdentifiers:(id)arg1 selectionMode:(long long)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(long long)_preferredModalPresentationStyle;
-(BOOL)allowsPickingMultipleItems;
-(void)setAllowsPickingMultipleItems:(BOOL)arg1 ;
-(BOOL)showsCloudItems;
-(void)setShowsCloudItems:(BOOL)arg1 ;
-(BOOL)showsItemsWithProtectedAssets;
-(void)setShowsItemsWithProtectedAssets:(BOOL)arg1 ;
-(BOOL)picksSingleCollectionEntity;
-(void)setPicksSingleCollectionEntity:(BOOL)arg1 ;
-(unsigned)watchCompatibilityVersion;
-(void)setWatchCompatibilityVersion:(unsigned)arg1 ;
-(id)typeIdentifiers;
-(BOOL)showsCatalogContent;
-(void)setShowsCatalogContent:(BOOL)arg1 ;
-(BOOL)pickingForExternalPlayer;
-(void)setPickingForExternalPlayer:(BOOL)arg1 ;
-(void)_forceDismissal;
-(void)_pickerDidCancel;
-(void)_pickerDidPickItems:(id)arg1 ;
-(void)_pickerDidPickPlaybackArchive:(id)arg1 ;
-(BOOL)_hasAddedRemoteView;
-(void)_addRemoteView;
-(void)_resetRemoteViewController;
-(void)_synchronizeSettings;
-(unsigned long long)_mediaPickerController_supportedInterfaceOrientations;
-(long long)_mediaPickerController_preferredInterfaceOrientationForPresentation;
-(unsigned long long)_keynote_supportedInterfaceOrientations;
-(long long)_keynote_preferredInterfaceOrientationForPresentation;
@end

