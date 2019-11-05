/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface AFUIDebugLog : NSObject {

	NSData* _data;
	NSString* _mimeType;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
+(id)logWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(BOOL)arg4 ;
-(NSString *)name;
-(NSData *)data;
-(NSString *)mimeType;
-(id)initWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(BOOL)arg4 ;
@end

