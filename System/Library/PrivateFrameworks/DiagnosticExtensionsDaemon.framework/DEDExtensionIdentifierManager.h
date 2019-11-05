/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensionsDaemon/NSSecureCoding.h>
#import <DiagnosticExtensionsDaemon/DEDSecureArchiving.h>

@class NSMutableDictionary, NSString;

@interface DEDExtensionIdentifierManager : NSObject <NSSecureCoding, DEDSecureArchiving> {

	NSMutableDictionary* _identifierTable;

}

@property (nonatomic,retain) NSMutableDictionary * identifierTable;              //@synthesize identifierTable=_identifierTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
+(id)archivedClasses;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(id)allIdentifiers;
-(BOOL)isKnownIdentifier:(id)arg1 ;
-(id)identifierForExtensionIdentifier:(id)arg1 ;
-(id)knownIdentifiersForExtensionIdentifier:(id)arg1 ;
-(void)revokeIdentifier:(id)arg1 ;
-(id)initWithExtensionIdentifiers:(id)arg1 ;
-(void)setIdentifierTable:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierTable;
@end

