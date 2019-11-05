/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:34 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/demod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface MSDiOSApp : NSObject {

	NSString* _path;
	NSDictionary* _info;

}

@property (retain) NSString * path;                  //@synthesize path=_path - In the implementation block
@property (retain) NSDictionary * info;              //@synthesize info=_info - In the implementation block
+(id)appWithPath:(id)arg1 ;
-(void)dealloc;
-(id)uniqueIdentifier;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(NSDictionary *)info;
-(void)setInfo:(NSDictionary *)arg1 ;
-(id)versionInfo;
@end

