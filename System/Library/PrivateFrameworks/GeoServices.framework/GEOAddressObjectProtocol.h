/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GEOAddressObjectProtocol <NSObject>
@property (nonatomic,readonly) NSString * displayLanguage; 
@property (nonatomic,readonly) BOOL hasKnownAccuracy; 
@property (nonatomic,readonly) int knownAccuracy; 
@required
+(id)libraryVersion;
-(id)name;
-(id)address;
-(id)spokenStructuredAddress;
-(int)knownAccuracy;
-(BOOL)hasKnownAccuracy;
-(id)phoneticName;
-(id)phoneticAddress;
-(id)spokenName;
-(id)spokenAddress;
-(id)phoneticLocaleIdentifier;
-(id)shortAddress;
-(id)weatherDisplayName;
-(id)addressDictionary;
-(id)spokenAddressForLocale:(id)arg1;
-(id)venueShortAddress;
-(id)cityDisplayNameWithFallback:(BOOL)arg1;
-(id)initWithCurrentCountry;
-(id)fullAddressWithMultiline:(BOOL)arg1 relative:(id)arg2;
-(id)venueLabel:(long long)arg1;
-(id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7;
-(id)initWithContactAddressDictionary:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4;
-(id)initWithCNPostalAddress:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4;
-(id)cnPostalAddress;
-(id)fullAddressWithMultiline:(BOOL)arg1;
-(id)fullAddressNoCurrentCountryWithMultiline:(BOOL)arg1;
-(id)parkingDisplayName;
-(id)venueLabel;
-(id)venueLevel;
-(id)titlesForMapRect:(SCD_Struct_GE41)arg1;
-(NSString *)displayLanguage;

@end

