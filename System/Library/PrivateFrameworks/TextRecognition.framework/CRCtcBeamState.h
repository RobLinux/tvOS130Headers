/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface CRCtcBeamState : NSObject {

	NSMutableDictionary* _mutablePaths;

}

@property (nonatomic,retain) NSMutableDictionary * mutablePaths;              //@synthesize mutablePaths=_mutablePaths - In the implementation block
@property (readonly) NSDictionary * paths; 
-(id)init;
-(void)addPath:(id)arg1 ;
-(NSDictionary *)paths;
-(id)pathForString:(id)arg1 ;
-(void)kBest:(id*)arg1 discarded:(id*)arg2 k:(unsigned long long)arg3 ;
-(void)mergePathsWithTrailingWhitespaces;
-(id)sortedKeys;
-(NSMutableDictionary *)mutablePaths;
-(void)setMutablePaths:(NSMutableDictionary *)arg1 ;
@end

