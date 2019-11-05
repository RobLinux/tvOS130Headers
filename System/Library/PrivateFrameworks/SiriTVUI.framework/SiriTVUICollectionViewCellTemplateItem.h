/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUITemplateItem.h>

@class NSString, NSArray, NSDictionary;

@interface SiriTVUICollectionViewCellTemplateItem : SiriTVUITemplateItem {

	BOOL _sizeToFitImage;
	NSString* _monogramText;
	NSArray* _monogramNames;
	NSDictionary* _images;
	NSString* _titleText;
	NSString* _subtitleText;

}

@property (nonatomic,copy) NSString * monogramText;              //@synthesize monogramText=_monogramText - In the implementation block
@property (nonatomic,copy) NSArray * monogramNames;              //@synthesize monogramNames=_monogramNames - In the implementation block
@property (nonatomic,copy) NSDictionary * images;                //@synthesize images=_images - In the implementation block
@property (nonatomic,copy) NSString * titleText;                 //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;              //@synthesize subtitleText=_subtitleText - In the implementation block
@property (assign,nonatomic) BOOL sizeToFitImage;                //@synthesize sizeToFitImage=_sizeToFitImage - In the implementation block
-(id)init;
-(NSDictionary *)images;
-(void)setImages:(NSDictionary *)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(BOOL)sizeToFitImage;
-(void)setSizeToFitImage:(BOOL)arg1 ;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)monogramText;
-(NSArray *)monogramNames;
-(id)initWithImages:(id)arg1 sizeToFitImage:(BOOL)arg2 titleText:(id)arg3 monogramNames:(id)arg4 ;
-(id)initWithImages:(id)arg1 sizeToFitImage:(BOOL)arg2 titleText:(id)arg3 subtitleText:(id)arg4 monogramNames:(id)arg5 ;
-(id)initWithImages:(id)arg1 sizeToFitImage:(BOOL)arg2 titleText:(id)arg3 subtitleText:(id)arg4 monogramText:(id)arg5 ;
-(void)setMonogramText:(NSString *)arg1 ;
-(void)setMonogramNames:(NSArray *)arg1 ;
@end

