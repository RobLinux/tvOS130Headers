/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SQLiteDatabaseStoreDescriptor : NSObject {

	NSString* _schemaName;
	Class _sessionClass;
	Class _transactionClass;

}

@property (retain) NSString * schemaName;               //@synthesize schemaName=_schemaName - In the implementation block
@property (assign) Class sessionClass;                  //@synthesize sessionClass=_sessionClass - In the implementation block
@property (assign) Class transactionClass;              //@synthesize transactionClass=_transactionClass - In the implementation block
-(Class)sessionClass;
-(Class)transactionClass;
-(void)setSchemaName:(NSString *)arg1 ;
-(void)setSessionClass:(Class)arg1 ;
-(void)setTransactionClass:(Class)arg1 ;
-(NSString *)schemaName;
@end

