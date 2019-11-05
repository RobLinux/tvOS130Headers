/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVInfoPanelMediaOptionCollectionViewController.h>

@interface AVInfoPanelSubtitleCollectionViewController : AVInfoPanelMediaOptionCollectionViewController
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setSelectedMediaOptionIndex:(long long)arg1 ;
-(id)mediaOptionAtIndexPath:(id)arg1 ;
-(id)_indexPathForMediaOptionIndex:(long long)arg1 ;
-(void)_scrollToAndSelectCurrentSubtitleOption;
-(void)_selectSubtitleAtIndex:(long long)arg1 shouldScrollToCenter:(BOOL)arg2 ;
@end
