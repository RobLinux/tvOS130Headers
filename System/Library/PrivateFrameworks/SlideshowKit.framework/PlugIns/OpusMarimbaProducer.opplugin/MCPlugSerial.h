/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCPlug.h>

@class NSMutableDictionary, NSString, MCContainerSerializer, NSDictionary;

@interface MCPlugSerial : MCPlug {

	NSMutableDictionary* mTransitionAttributes;
	unsigned long long mIndex;
	NSString* mTransitionID;
	double mTransitionDuration;
	MCContainerSerializer* mSupercontainer;

}

@property (assign,nonatomic) unsigned long long index; 
@property (assign) MCContainerSerializer * supercontainer; 
@property (copy) NSString * transitionID; 
@property (assign,nonatomic) double transitionDuration; 
@property (copy) NSDictionary * transitionAttributes; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
-(void)setTransitionAttributes:(NSDictionary *)arg1 ;
-(void)setTransitionID:(NSString *)arg1 ;
-(id)transitionAttributeForKey:(id)arg1 ;
-(NSDictionary *)transitionAttributes;
-(NSString *)transitionID;
-(void)setTransitionAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)demolish;
-(MCContainerSerializer *)supercontainer;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setSupercontainer:(MCContainerSerializer *)arg1 ;
-(void)addTransitionAttributes:(id)arg1 ;
@end

