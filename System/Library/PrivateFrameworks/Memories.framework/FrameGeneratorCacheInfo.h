/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@class VideoMovie;

@interface FrameGeneratorCacheInfo : NSObject {

	VideoMovie* m_movie;
	SCD_Struct_TV3 m_time;
	CGSize m_size;
	double m_rotation;

}

@property (nonatomic,retain) VideoMovie * movie; 
@property (assign,nonatomic) SCD_Struct_TV3 time; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double rotation; 
-(void)dealloc;
-(CGSize)size;
-(SCD_Struct_TV3)time;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setTime:(SCD_Struct_TV3)arg1 ;
-(VideoMovie *)movie;
-(void)setMovie:(VideoMovie *)arg1 ;
@end

