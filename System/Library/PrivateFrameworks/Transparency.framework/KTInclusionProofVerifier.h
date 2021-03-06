/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface KTInclusionProofVerifier : NSObject {

	NSDictionary* _appTrustedKeys;
	NSDictionary* _tltTrustedKeys;
	NSString* _application;

}

@property (retain) NSDictionary * appTrustedKeys;              //@synthesize appTrustedKeys=_appTrustedKeys - In the implementation block
@property (retain) NSDictionary * tltTrustedKeys;              //@synthesize tltTrustedKeys=_tltTrustedKeys - In the implementation block
@property (retain) NSString * application;                     //@synthesize application=_application - In the implementation block
-(NSString *)application;
-(void)setApplication:(NSString *)arg1 ;
-(NSDictionary *)appTrustedKeys;
-(NSDictionary *)tltTrustedKeys;
-(BOOL)verifyInclusionProofWithMapEntry:(id)arg1 perAppLogEntry:(id)arg2 topLevelTreeEntry:(id)arg3 error:(id*)arg4 ;
-(id)initWithKeyStore:(id)arg1 application:(id)arg2 ;
-(void)setAppTrustedKeys:(NSDictionary *)arg1 ;
-(void)setTltTrustedKeys:(NSDictionary *)arg1 ;
@end

