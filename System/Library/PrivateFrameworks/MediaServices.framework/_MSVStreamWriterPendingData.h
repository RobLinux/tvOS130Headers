/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _MSVStreamWriterPendingData : NSObject {

	NSData* _data;
	/*^block*/id _completionHandler;
	long long _bytesWritten;

}

@property (nonatomic,copy) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completionHandler;                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long bytesWritten;              //@synthesize bytesWritten=_bytesWritten - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(long long)bytesWritten;
-(void)setBytesWritten:(long long)arg1 ;
@end

