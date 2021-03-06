/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PXFeedLayoutGeneratorScanState : NSObject {

	BOOL _scannedBatchHasCaption;
	long long _scanLocation;
	id _scannedBatchID;
	long long _scanSpecialSequenceCount;

}

@property (assign,nonatomic) long long scanLocation;                          //@synthesize scanLocation=_scanLocation - In the implementation block
@property (nonatomic,retain) id scannedBatchID;                               //@synthesize scannedBatchID=_scannedBatchID - In the implementation block
@property (assign,nonatomic) BOOL scannedBatchHasCaption;                     //@synthesize scannedBatchHasCaption=_scannedBatchHasCaption - In the implementation block
@property (assign,nonatomic) long long scanSpecialSequenceCount;              //@synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount - In the implementation block
-(long long)scanLocation;
-(void)setScanLocation:(long long)arg1 ;
-(id)scannedBatchID;
-(void)setScannedBatchID:(id)arg1 ;
-(BOOL)scannedBatchHasCaption;
-(void)setScannedBatchHasCaption:(BOOL)arg1 ;
-(long long)scanSpecialSequenceCount;
-(void)setScanSpecialSequenceCount:(long long)arg1 ;
@end

