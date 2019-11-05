/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MRCAMLAnimation : NSObject {

	double startTime;
	double duration;
	BOOL removedOnCompletion;
	NSString* keyPath;
	NSArray* keyframes;

}

@property (nonatomic,copy) NSString * keyPath; 
@property (nonatomic,retain) NSArray * keyframes; 
-(void)dealloc;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(NSArray *)keyframes;
-(void)setKeyframes:(NSArray *)arg1 ;
@end

