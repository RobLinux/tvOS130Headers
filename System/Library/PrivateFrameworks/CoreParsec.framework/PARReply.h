/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreParsec/NSSecureCoding.h>

@class NSArray, NSURLRequest, NSURLResponse, NSData, PARTask, NSString;

@interface PARReply : NSObject <NSSecureCoding> {

	NSArray* _rawResponse;
	NSURLRequest* _httpRequest;
	NSURLResponse* _httpResponse;
	NSData* _data;
	PARTask* _task;
	double _scale;
	NSString* _geoSessionEntityString;
	NSArray* _localSuggestions;

}

@property (nonatomic,retain) NSURLRequest * httpRequest;                   //@synthesize httpRequest=_httpRequest - In the implementation block
@property (nonatomic,retain) NSURLResponse * httpResponse;                 //@synthesize httpResponse=_httpResponse - In the implementation block
@property (nonatomic,retain) NSArray * rawResponse; 
@property (nonatomic,retain) NSData * data;                                //@synthesize data=_data - In the implementation block
@property (assign,nonatomic,__weak) PARTask * task;                        //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) double scale;                                 //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSString * geoSessionEntityString;              //@synthesize geoSessionEntityString=_geoSessionEntityString - In the implementation block
@property (nonatomic,retain) NSArray * localSuggestions;                   //@synthesize localSuggestions=_localSuggestions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(PARTask *)task;
-(void)setTask:(PARTask *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setHttpResponse:(NSURLResponse *)arg1 ;
-(NSURLResponse *)httpResponse;
-(NSArray *)rawResponse;
-(void)setRawResponse:(NSArray *)arg1 ;
-(NSArray *)localSuggestions;
-(NSString *)geoSessionEntityString;
-(NSURLRequest *)httpRequest;
-(void)setHttpRequest:(NSURLRequest *)arg1 ;
-(void)setGeoSessionEntityString:(NSString *)arg1 ;
-(void)setLocalSuggestions:(NSArray *)arg1 ;
@end

