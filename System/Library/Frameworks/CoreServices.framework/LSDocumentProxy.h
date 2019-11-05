/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSResourceProxy.h>
#import <CoreServices/NSSecureCoding.h>

@class NSURL, NSString;

@interface LSDocumentProxy : LSResourceProxy <NSSecureCoding> {

	SCD_Struct_LS10 _sourceAuditToken;
	BOOL _isContentManaged;
	NSURL* _URL;
	NSString* _name;
	NSString* _typeIdentifier;
	NSString* _MIMEType;

}

@property (getter=isImageOrVideo,readonly) BOOL imageOrVideo; 
@property (nonatomic,readonly) NSURL * URL;                                                 //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * typeIdentifier;                                   //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * MIMEType;                                         //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) NSString * containerOwnerApplicationIdentifier; 
@property (getter=isContentManaged,nonatomic,readonly) BOOL contentManaged;                 //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_LS10* sourceAuditToken; 
@property (nonatomic,readonly) BOOL sourceIsManaged; 
@property (nonatomic,readonly) const SCD_Struct_LS10* managedSourceAuditToken; 
+(BOOL)supportsSecureCoding;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 ;
+(id)documentProxyForURL:(id)arg1 isContentManaged:(BOOL)arg2 sourceAuditToken:(const SCD_Struct_LS10*)arg3 ;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 isContentManaged:(BOOL)arg4 sourceAuditToken:(const SCD_Struct_LS10*)arg5 ;
+(id)documentProxyForURL:(id)arg1 ;
+(id)documentProxyForURL:(id)arg1 managedSourceAuditToken:(const SCD_Struct_LS10*)arg2 ;
+(id)documentProxyForURL:(id)arg1 sourceIsManaged:(BOOL)arg2 ;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 managedSourceAuditToken:(const SCD_Struct_LS10*)arg4 ;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(BOOL)arg4 ;
-(id)__IS_iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(NSString *)name;
-(id)debugDescription;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(NSString *)typeIdentifier;
-(BOOL)sourceIsManaged;
-(id)applicationsAvailableForOpeningWithError:(id*)arg1 ;
-(id)applicationsAvailableForOpeningWithStyle:(unsigned char)arg1 limit:(unsigned long long)arg2 XPCConnection:(id)arg3 error:(id*)arg4 ;
-(id)iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(id)initWithURL:(id)arg1 name:(id)arg2 type:(id)arg3 MIMEType:(id)arg4 isContentManaged:(BOOL)arg5 sourceAuditToken:(const SCD_Struct_LS10*)arg6 ;
-(BOOL)isContentManaged;
-(const SCD_Struct_LS10*)sourceAuditToken;
-(BOOL)isImageOrVideo;
-(NSString *)containerOwnerApplicationIdentifier;
-(id)applicationsAvailableForOpeningWithHandlerRanks:(id)arg1 error:(id*)arg2 ;
-(id)applicationsAvailableForOpeningFromAirDropWithError:(id*)arg1 ;
-(id)applicationsAvailableForOpeningByDraggingAndDroppingWithError:(id*)arg1 ;
-(const SCD_Struct_LS10*)managedSourceAuditToken;
-(optional<LaunchServices::BindingEvaluator>*)_bindingEvaluatorWithAuditToken:(const SCD_Struct_LS10*)arg1 ;
@end
