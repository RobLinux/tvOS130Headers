/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCObject.h>

@class MCAsset, NSString, MCContainerEffect, NSArray, NSAttributedString;

@interface MCText : MCObject {

	MCAsset* mAsset;
	unsigned long long mIndex;
	NSString* mKeyInAsset;
	MCContainerEffect* mContainer;
	NSArray* mStringAttributes;

}

@property (assign) MCContainerEffect * container; 
@property (assign,nonatomic) unsigned long long index; 
@property (copy) NSAttributedString * attributedString; 
@property (retain) NSArray * stringAttributes; 
@property (nonatomic,retain) MCAsset * asset; 
@property (copy) NSString * keyInAsset; 
-(MCContainerEffect *)container;
-(void)setContainer:(MCContainerEffect *)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(MCAsset *)asset;
-(NSAttributedString *)attributedString;
-(void)setAsset:(MCAsset *)arg1 ;
-(void)demolish;
-(NSString *)keyInAsset;
-(id)imprint;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setKeyInAsset:(NSString *)arg1 ;
-(NSArray *)stringAttributes;
-(id)attributedStringWithCTAttributes;
-(void)setStringAttributes:(NSArray *)arg1 ;
@end

