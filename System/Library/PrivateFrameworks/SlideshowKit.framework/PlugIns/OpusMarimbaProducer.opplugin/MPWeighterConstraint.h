/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface MPWeighterConstraint : NSObject {

	long long numOfImages;
	NSDictionary* nextConstraints;
	NSString* presetID;
	long long movieCount;
	BOOL moviesOnly;
	BOOL ignoreMovies;
	long long wideLandscape;
	long long square;
	long long landscape;
	long long portrait;
	long long hBreaks;
	long long vBreaks;
	long long supportsHBreaks;
	long long supportsVBreaks;
	long long supportsAllBreaks;
	long long allBreaks;
	BOOL hasBreak;
	NSArray* maxAspectRatios;
	NSArray* minAspectRatios;
	NSArray* tags;
	BOOL tagsOnSourceOnly;
	BOOL shelf;

}

@property (nonatomic,retain) NSDictionary * nextConstraints; 
@property (nonatomic,retain) NSString * presetID; 
@property (nonatomic,retain) NSArray * maxAspectRatios; 
@property (nonatomic,retain) NSArray * minAspectRatios; 
@property (nonatomic,retain) NSArray * tags; 
-(id)init;
-(void)dealloc;
-(NSArray *)tags;
-(void)setTags:(NSArray *)arg1 ;
-(NSString *)presetID;
-(void)setPresetID:(NSString *)arg1 ;
-(void)setNextConstraints:(NSDictionary *)arg1 ;
-(void)setMaxAspectRatios:(NSArray *)arg1 ;
-(void)setMinAspectRatios:(NSArray *)arg1 ;
-(NSDictionary *)nextConstraints;
-(NSArray *)maxAspectRatios;
-(NSArray *)minAspectRatios;
@end

