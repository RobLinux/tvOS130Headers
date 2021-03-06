/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_UTConcreteType.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNumber, NSDictionary, NSData, NSString, NSURL, NSArray;

@interface _UTDeclaredType : _UTConcreteType {

	NSObject*<OS_dispatch_queue> _additionalInfoQueue;
	unsigned _flags;
	NSNumber* _version;
	NSDictionary* _localizedDescriptionDictionary;
	NSData* _declaringBundleBookmark;
	NSString* _declaringBundleDelegate;
	NSURL* _declaringBundleURL;
	NSString* _kextName;
	NSDictionary* _tagSpecification;
	NSArray* _conformsTo;
	NSArray* _iconFiles;
	NSURL* _parentIconURL;
	NSString* _referenceURLString;
	NSString* _glyphName;
	NSString* _iconName;

}
+(BOOL)supportsSecureCoding;
-(id)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)version;
-(BOOL)_isActive;
-(id)_iconName;
-(id)parentIdentifiers;
-(id)_iconURL;
-(id)referenceURL;
-(BOOL)_isAppleInternal;
-(id)initWithContext:(LSContext*)arg1 UTTypeID:(unsigned)arg2 UTTypeData:(const SCD_Struct_UT21*)arg3 propertiesToResolve:(unsigned long long)arg4 ;
-(id)declaration;
-(id)declaringBundleURL;
-(BOOL)isDeclared;
-(id)tagSpecification;
-(BOOL)_isPublic;
-(id)_localizedDescriptionDictionary;
-(id)_kernelExtensionName;
-(id)_glyphName;
-(BOOL)_isWildcard;
-(BOOL)needsWorkaroundFor22092605;
-(id)_iconURLCheckingParents:(BOOL)arg1 ;
@end

