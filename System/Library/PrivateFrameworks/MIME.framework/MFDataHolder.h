/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MFDataHolder : NSObject {

	NSMutableArray* _datas;
	unsigned long long _length;

}

@property (nonatomic,readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
+(id)dataHolderWithData:(id)arg1 ;
+(id)dataHolder;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)initWithData:(id)arg1 ;
-(id)data;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)addData:(id)arg1 ;
-(void)enumerateConvertingNewlinesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDatasUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfNewlinesNeedingConversion:(BOOL)arg1 ;
@end

