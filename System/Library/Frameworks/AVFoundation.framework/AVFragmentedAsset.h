/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVURLAsset.h>
#import <AVFoundation/AVFragmentMinding.h>

@class AVFragmentedAssetInternal, NSArray;

@interface AVFragmentedAsset : AVURLAsset <AVFragmentMinding> {

	AVFragmentedAssetInternal* _fragmentedAsset;

}

@property (nonatomic,readonly) NSArray * tracks; 
@property (getter=isAssociatedWithFragmentMinder,nonatomic,readonly) BOOL associatedWithFragmentMinder; 
+(id)fragmentedAssetWithURL:(id)arg1 options:(id)arg2 ;
-(NSArray *)tracks;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(BOOL)_mindsFragments;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)trackWithTrackID:(int)arg1 ;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(Class)_classForAssetTracks;
-(BOOL)isAssociatedWithFragmentMinder;
@end
