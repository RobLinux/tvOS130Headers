/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:43:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/Support/bookassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, BLSinfsArray;

@interface BLDownloadDRM : NSObject {

	NSArray* _sinfs;

}

@property (nonatomic,retain) NSArray * sinfs;                    //@synthesize sinfs=_sinfs - In the implementation block
@property (getter=isDRMFree,readonly) BOOL DRMFree; 
@property (readonly) BLSinfsArray * pinfsArray; 
@property (readonly) BLSinfsArray * sinfsArray; 
-(void)setSinfs:(NSArray *)arg1 ;
-(NSArray *)sinfs;
-(BOOL)isDRMFree;
-(id)initWithSinfArray:(id)arg1 ;
-(id)_sinfsArrayWithDataKey:(id)arg1 ;
-(id)firstDataForSinfDataKey:(id)arg1 ;
-(BLSinfsArray *)pinfsArray;
-(id)sinfForIdentifier:(long long)arg1 ;
-(BLSinfsArray *)sinfsArray;
@end
