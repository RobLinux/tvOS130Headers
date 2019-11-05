/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, TKTokenConfiguration, NSString, NSDictionary;

@interface TKTokenKeychainContents : NSObject {

	NSArray* _items;
	TKTokenConfiguration* _configuration;
	NSString* _tokenID;

}

@property (readonly) TKTokenConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NSString * tokenID;                                //@synthesize tokenID=_tokenID - In the implementation block
@property (copy,readonly) NSDictionary * keys; 
@property (copy,readonly) NSDictionary * certificates; 
@property (copy,readonly) NSArray * items; 
-(NSDictionary *)keys;
-(NSDictionary *)certificates;
-(TKTokenConfiguration *)configuration;
-(NSArray *)items;
-(id)initWithTokenID:(id)arg1 ;
-(NSString *)tokenID;
-(id)keyForObjectID:(id)arg1 error:(id*)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)certificateForObjectID:(id)arg1 error:(id*)arg2 ;
-(void)fillWithItems:(id)arg1 ;
-(id)certificateForKey:(id)arg1 ;
@end

