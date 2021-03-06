///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGAccessLevel;
@class DBTEAMLOGSharedContentChangeMemberRoleDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedContentChangeMemberRoleDetails` struct.
///
/// Changed access type of shared file/folder member.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedContentChangeMemberRoleDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Previous access level. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBSHARINGAccessLevel *previousAccessLevel;

/// New access level.
@property (nonatomic, readonly) DBSHARINGAccessLevel *dNewAccessLevel;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewAccessLevel New access level.
/// @param previousAccessLevel Previous access level. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewAccessLevel:(DBSHARINGAccessLevel *)dNewAccessLevel
                    previousAccessLevel:(nullable DBSHARINGAccessLevel *)previousAccessLevel;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewAccessLevel New access level.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewAccessLevel:(DBSHARINGAccessLevel *)dNewAccessLevel;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedContentChangeMemberRoleDetails`
/// struct.
///
@interface DBTEAMLOGSharedContentChangeMemberRoleDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedContentChangeMemberRoleDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedContentChangeMemberRoleDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentChangeMemberRoleDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSharedContentChangeMemberRoleDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedContentChangeMemberRoleDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentChangeMemberRoleDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedContentChangeMemberRoleDetails` object.
///
+ (DBTEAMLOGSharedContentChangeMemberRoleDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
