/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterNewFlowVerdict.h>
#import <NetworkExtension/NSSecureCoding.h>
#import <NetworkExtension/NSCopying.h>

@interface NEFilterControlVerdict : NEFilterNewFlowVerdict <NSSecureCoding, NSCopying> {

	BOOL _updateRules;
	BOOL _handledByDataProvider;

}

@property (assign) BOOL updateRules;                        //@synthesize updateRules=_updateRules - In the implementation block
@property (assign) BOOL handledByDataProvider;              //@synthesize handledByDataProvider=_handledByDataProvider - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)updateRules;
+(id)allowVerdictWithUpdateRules:(BOOL)arg1 ;
+(id)dropVerdictWithUpdateRules:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)updateRules;
-(BOOL)handledByDataProvider;
-(void)setUpdateRules:(BOOL)arg1 ;
-(void)setHandledByDataProvider:(BOOL)arg1 ;
@end
