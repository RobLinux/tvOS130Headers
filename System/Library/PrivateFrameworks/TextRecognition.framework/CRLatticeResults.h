/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface CRLatticeResults : NSObject {

	NSMutableArray* _mutableResults;

}

@property (nonatomic,retain) NSMutableArray * mutableResults;              //@synthesize mutableResults=_mutableResults - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
-(id)init;
-(NSArray *)results;
-(void)addResult:(id)arg1 ;
-(NSMutableArray *)mutableResults;
-(void)setMutableResults:(NSMutableArray *)arg1 ;
@end

