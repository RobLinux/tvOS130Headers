/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxMetaPlug.h>

@protocol FxMetaPlug
@required
-(id)version;
-(id)uuid;
-(id)displayName;
-(id)groupUUID;
-(id)fxPlugProperties;
-(id)groupDisplayName;
-(id)versionDisplayName;

@end


@interface FxMetaPlug : NSObject <FxMetaPlug> {

	FxMetaPlugPriv* _priv;

}
+(id)syntheticUUIDBasedOnString:(id)arg1 ;
+(id)fxMetaPlugWithWrapper:(id)arg1 andData:(id)arg2 ;
+(id)syntheticUUIDBasedOnIndex:(int)arg1 ;
-(void)dealloc;
-(id)data;
-(id)version;
-(id)uuid;
-(id)displayName;
-(id)groupUUID;
-(id)fxPlugProperties;
-(id)wrapper;
-(id)groupDisplayName;
-(id)initWithWrapper:(id)arg1 andData:(id)arg2 ;
-(id)versionDisplayName;
-(id)fxPlugDescriptor;
@end

