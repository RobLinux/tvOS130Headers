/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:11 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoard/HeadBoard-Structs.h>
#import <HeadBoard/HBTopShelfModel.h>

@class NSArray;

@interface HBTopShelfBannerModel : HBTopShelfModel {

	NSArray* _items;

}

@property (nonatomic,copy) NSArray * items;                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) long long placeholderAssetType; 
+(CGSize)bannerImageSize;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)placeholderAssetType;
-(id)initWithTopShelfInsetContent:(id)arg1 applicationIdentifier:(id)arg2 ;
-(id)_logSafeDescriptionBuilder;
-(void)_applyItemUpdates:(id)arg1 ;
@end

