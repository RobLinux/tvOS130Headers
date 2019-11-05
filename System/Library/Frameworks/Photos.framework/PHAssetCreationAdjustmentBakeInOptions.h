/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/NSCopying.h>

@interface PHAssetCreationAdjustmentBakeInOptions : NSObject <NSCopying> {

	BOOL _shouldBakeInIfLivePhotoPlaybackDisabled;
	BOOL _shouldBakeInIfLivePhotoMuted;
	BOOL _shouldBakeInIfAdjustedByThirdParty;
	BOOL _shouldBakeInIfCropped;
	BOOL _shouldBakeInIfTimelineTrimmed;
	BOOL _shouldBakeInIfPortraitDepthEffectEnabled;
	BOOL _shouldBakeInIfContainsPenultimateResources;

}

@property (assign,nonatomic) BOOL shouldBakeInIfLivePhotoPlaybackDisabled;                 //@synthesize shouldBakeInIfLivePhotoPlaybackDisabled=_shouldBakeInIfLivePhotoPlaybackDisabled - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfLivePhotoMuted;                            //@synthesize shouldBakeInIfLivePhotoMuted=_shouldBakeInIfLivePhotoMuted - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfAdjustedByThirdParty;                      //@synthesize shouldBakeInIfAdjustedByThirdParty=_shouldBakeInIfAdjustedByThirdParty - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfCropped;                                   //@synthesize shouldBakeInIfCropped=_shouldBakeInIfCropped - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfTimelineTrimmed;                           //@synthesize shouldBakeInIfTimelineTrimmed=_shouldBakeInIfTimelineTrimmed - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfPortraitDepthEffectEnabled;                //@synthesize shouldBakeInIfPortraitDepthEffectEnabled=_shouldBakeInIfPortraitDepthEffectEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfContainsPenultimateResources;              //@synthesize shouldBakeInIfContainsPenultimateResources=_shouldBakeInIfContainsPenultimateResources - In the implementation block
+(id)adjustmentBakeInOptionsForPublishingOriginals;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithXPCDict:(id)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(BOOL)shouldBakeInIfLivePhotoPlaybackDisabled;
-(void)setShouldBakeInIfLivePhotoPlaybackDisabled:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfLivePhotoMuted;
-(void)setShouldBakeInIfLivePhotoMuted:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfAdjustedByThirdParty;
-(void)setShouldBakeInIfAdjustedByThirdParty:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfCropped;
-(void)setShouldBakeInIfCropped:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfTimelineTrimmed;
-(void)setShouldBakeInIfTimelineTrimmed:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfPortraitDepthEffectEnabled;
-(void)setShouldBakeInIfPortraitDepthEffectEnabled:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfContainsPenultimateResources;
-(void)setShouldBakeInIfContainsPenultimateResources:(BOOL)arg1 ;
@end

