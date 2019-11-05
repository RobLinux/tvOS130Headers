/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ENTTransport.h>

@class NSURL, NSMutableData, NSData, NSString;

@interface ENTHTTPClient : NSObject <ENTTransport> {

	int _responseDataOffset;
	int _timeout;
	NSURL* _url;
	NSMutableData* _requestData;
	NSData* _responseData;
	NSString* _userAgent;

}

@property (nonatomic,retain) NSMutableData * requestData;              //@synthesize requestData=_requestData - In the implementation block
@property (nonatomic,retain) NSData * responseData;                    //@synthesize responseData=_responseData - In the implementation block
@property (assign,nonatomic) int responseDataOffset;                   //@synthesize responseDataOffset=_responseDataOffset - In the implementation block
@property (nonatomic,retain) NSString * userAgent;                     //@synthesize userAgent=_userAgent - In the implementation block
@property (assign,nonatomic) int timeout;                              //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(void)setTimeout:(int)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)cancel;
-(int)timeout;
-(NSURL *)url;
-(void)flush;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)userAgent;
-(NSData *)responseData;
-(void)setRequestData:(NSMutableData *)arg1 ;
-(NSMutableData *)requestData;
-(void)setResponseData:(NSData *)arg1 ;
-(id)newRequest;
-(id)initWithURL:(id)arg1 userAgent:(id)arg2 timeout:(int)arg3 ;
-(int)responseDataOffset;
-(void)setResponseDataOffset:(int)arg1 ;
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3 ;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3 ;
@end

