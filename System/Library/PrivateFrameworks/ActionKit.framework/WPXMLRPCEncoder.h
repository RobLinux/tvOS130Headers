/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSString, NSArray, NSFileHandle, NSNumber, NSData;

@interface WPXMLRPCEncoder : NSObject {

	NSString* _method;
	NSArray* _parameters;
	NSFileHandle* _streamingCacheFile;
	BOOL _isResponse;
	BOOL _isFault;
	NSNumber* _faultCode;
	NSString* _faultString;

}

@property (nonatomic,readonly) NSString * method;                 //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) NSArray * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSData * body; 
-(id)init;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(void)encodeObject:(id)arg1 ;
-(NSString *)method;
-(NSArray *)parameters;
-(NSData *)body;
-(void)encodeData:(id)arg1 ;
-(id)initWithMethod:(id)arg1 andParameters:(id)arg2 ;
-(id)initWithResponseParams:(id)arg1 ;
-(id)initWithResponseFaultCode:(id)arg1 andString:(id)arg2 ;
-(id)dataEncodedWithError:(id*)arg1 ;
-(BOOL)encodeToFile:(id)arg1 error:(id*)arg2 ;
-(void)encodeForStreaming;
-(void)valueTag:(id)arg1 value:(id)arg2 ;
-(void)encodeArray:(id)arg1 ;
-(void)encodeDictionary:(id)arg1 ;
-(void)encodeBoolean:(CFBooleanRef)arg1 ;
-(void)encodeNumber:(id)arg1 ;
-(void)encodeString:(id)arg1 omitTag:(BOOL)arg2 ;
-(void)encodeDate:(id)arg1 ;
-(void)encodeInputStream:(id)arg1 ;
-(void)encodeFileHandle:(id)arg1 ;
-(id)tmpFilePathForCache;
@end

