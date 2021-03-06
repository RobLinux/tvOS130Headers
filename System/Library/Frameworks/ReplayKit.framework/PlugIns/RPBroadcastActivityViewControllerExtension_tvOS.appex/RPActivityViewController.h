/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/PlugIns/RPBroadcastActivityViewControllerExtension_tvOS.appex/RPBroadcastActivityViewControllerExtension_tvOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RPBroadcastActivityViewControllerExtension_tvOS/RPBroadcastActivityViewControllerExtension_tvOS-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class NSString, UIImage, NSArray, UIVisualEffectView, UIViewController, UICollectionView;

@interface RPActivityViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	NSString* _hostAppBundleIdentifier;
	NSString* _hostAppDisplayName;
	UIImage* _hostAppImage;
	NSArray* _activities;
	/*^block*/id _completionHandler;
	UIVisualEffectView* _effectView;
	UIViewController* _currentActivityViewController;
	UICollectionView* _collectionView;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;                               //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UIViewController * currentActivityViewController;              //@synthesize currentActivityViewController=_currentActivityViewController - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                             //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSString * hostAppBundleIdentifier;                            //@synthesize hostAppBundleIdentifier=_hostAppBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * hostAppDisplayName;                                 //@synthesize hostAppDisplayName=_hostAppDisplayName - In the implementation block
@property (nonatomic,retain) UIImage * hostAppImage;                                        //@synthesize hostAppImage=_hostAppImage - In the implementation block
@property (nonatomic,retain) NSArray * activities;                                          //@synthesize activities=_activities - In the implementation block
@property (nonatomic,copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)activities;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setActivities:(NSArray *)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIVisualEffectView *)effectView;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)didTapMenuButton;
-(id)_roundedImageFromImage:(id)arg1 ;
-(NSString *)hostAppBundleIdentifier;
-(void)setHostAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)hostAppDisplayName;
-(void)setHostAppDisplayName:(NSString *)arg1 ;
-(UIImage *)hostAppImage;
-(void)setHostAppImage:(UIImage *)arg1 ;
-(UIViewController *)currentActivityViewController;
-(void)setCurrentActivityViewController:(UIViewController *)arg1 ;
@end

